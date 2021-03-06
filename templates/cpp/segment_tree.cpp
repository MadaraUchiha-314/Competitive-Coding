namespace SegmentTree {
  #define middle(l, r) (l + r) / 2
  #define left_child(current) 1 + (current << 1)
  #define right_child(current) 2 + (current << 1)
  
  template <typename Item, typename Node, Node create_node(Item), Node combine_nodes(Node, Node), Node Identity>
  class SegTree {
    private:
      int N;
      vector<Node> tree;
      
      Node create(vector<Item>& nodes, int left, int right, int current) {
        if (right == left) {
          tree[current] = create_node(nodes[left]);
        } else {
          int mid = middle(left, right);
          tree[current] = combine_nodes(
            create(nodes, left, mid, left_child(current)),
            create(nodes, mid + 1, right, right_child(current))
          );
        }
        return tree[current];
      }

      Node query(int left, int right, int current, int current_left, int current_right) {
        if (current_left >= left && current_right <= right) {
          return tree[current];
        }
        if (current_left > right || current_right < left) {
          return Identity;
        }
        int mid = middle(current_left, current_right);
        return combine_nodes(
          query(left, right, left_child(current), current_left, mid),
          query(left, right, right_child(current), mid + 1, current_right)
        );
      }

     public:
      SegTree(vector<Item>& nodes) {
        N = nodes.size();
        tree.resize(4 * N);
        create(nodes, 0, N - 1, 0);
      }
      
      Node query(int l, int r) {
        return query(l, r, 0, 0, N - 1);
      }
  };
}