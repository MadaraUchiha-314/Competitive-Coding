/*
 * Problem Name/URL: 
 */
#include <bits/stdc++.h>
using namespace std;

#define NEW_LINE "\n"
#define SPACE " "
#define COMMA ","
#define COLON ":"
#define SQB_O "["
#define SQB_C "]"
#define CYB_O "{"
#define CYB_C "}"
#define ROB_O "("
#define ROB_C ")"

/**
 * Overloading ostream for Pairs, Vectors, Maps
 */
template <typename T, typename U>
ostream& operator<< (ostream& os, pair<T, U> x) { os << ROB_O << x.first << COMMA << SPACE << x.second << ROB_C; return os; }

template <typename T>
ostream& operator<< (ostream& os, vector<T> x) { os << SQB_O; for (auto e: x) os << e << COMMA << SPACE; os << SQB_C << NEW_LINE; return os; }

template <typename T, typename U>
ostream& operator<< (ostream& os, map<T, U> x) { os << CYB_O << NEW_LINE; for (auto e: x) os << e << COLON << SPACE << x[e] << NEW_LINE; os << CYB_C << NEW_LINE; return os; }

#define DEBUG true
#if DEBUG
  #define trace(x, y) cout << x << COLON << SPACE << y << NEW_LINE;
#else
  #define trace(x, y) 1
#endif

/**
 * Defining min and max for multiple arguments.
 */
template <typename T>
T mins(T a, T b) { return min(a, b); }

template <typename T, typename... Args>
T mins(T a, Args... args) { return min(a, mins(args...)); }

template <typename T>
T maxs(T a, T b) { return max(a, b); }

template <typename T, typename... Args>
T maxs(T a, Args... args) { return max(a, maxs(args...)); }

/**
 * Misc
 */
#define pcodejam(t) cout << "Case #" << t << ": "

void input();
void solve();

/**
 * Problem Specific Stuff
 */


void solve() {
}

int main () {
  /**
   * Fast IO.
   */
  ios::sync_with_stdio(false);
  cin.tie(0);

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    input();
    solve();
  }
  return 0;
}

void input() {
}
