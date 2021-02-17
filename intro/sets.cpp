#include <iostream>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

void fastscan(int &number) {
  // variable to indicate sign of input number
  bool negative = false;
  register int c;

  number = 0;

  // extract current character from buffer
  c = getchar();
  if (c == '-') {
    // number is negative
    negative = true;

    // extract the next character from the buffer
    c = getchar();
  }

  // Keep on extracting characters if they are integers
  // i.e ASCII Value lies from '0'(48) to '9' (57)
  for (; (c > 47 && c < 58); c = getchar())
    number = number * 10 + c - 48;

  // if scanned input has a negative sign, negate the
  // value of the input number
  if (negative)
    number *= -1;
}

void output(vector<int> v) {
  cout << v.size() << endl;
  for (auto x : v) {
    cout << x << ' ';
  }
  cout << endl;
}

int main() {
  fast ll n;
  cin >> n;

  // Two sets
  vector<int> one;
  vector<int> two;

  // No solution
  if ((n * (n + 1)) % 4) {
    cout << "NO" << endl;
  } else {
    // Fill up the vectors
    one.pb(n);
    for (int i = 1; i < n; i++) {
      two.pb(i);
    }

    // Get sums
    ll sumOne = n;
    ll sumTwo = n * (n - 1) / 2;
    ll diff = (sumTwo - sumOne);

    if (diff != 0) {
      diff /= 2;
      ll midSum = 0;
      for (auto i = --two.end(); i >= two.begin(); i--) {
        if (midSum + *i < diff) {
          // Add to first set
          midSum += *i;
          one.pb(*i);
          two.erase(i);
        } else if (midSum + *i == diff) {
          // Balanced sets
          one.pb(*i);
          two.erase(i);
          break;
        }
      }
    }

    // Output answers
    cout << "YES" << endl;
    output(one);
    output(two);
  }

  return 0;
}
