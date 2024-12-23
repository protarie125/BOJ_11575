#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll T;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> T;
  while (0 < (T--)) {
    ll a, b;
    string s;

    cin >> a >> b >> s;

    for (auto&& x : s) {
      x = (a * (x - 'A') + b) % 26;
      x += 'A';
    }

    cout << s << '\n';
  }

  return 0;
}