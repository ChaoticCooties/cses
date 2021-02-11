#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Get size
  int s = 0;
  scanf("%d", &s);

  // Get first index in array
  long long n = 0;
  scanf("%lld", &n);

  long long t = 0;
  // Compare with previous number
  for (int i = 0; i < s - 1; i++) {
      long long num;
      scanf("%lld", &num);
      if (num < n) {
          t += (n - num);
      } else {
          n = num;
      }
  }

  cout << t << '\n';

  return 0;
}
