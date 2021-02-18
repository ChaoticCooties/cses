#include <iostream>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define MOD 1000000007

using namespace std;

void fastscan(int &number) {
  // variable to indicate sign of input number
  bool negative = false;
  int c;

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

void output(vector<ll> steps) {
    for (auto s : steps) {
        cout << s << ' ';
    }
}

int main() {
  fast ll n;
  scanf("%lld", &n);
  vector<ll> steps;
  steps.pb(n);

  while (n > 1) {
    if (n % 2) {
      n = (n * 3) + 1;
      steps.pb(n);
    } else {
      n /= 2;
      steps.pb(n);
    }
  }

  output(steps);

  return 0;
}
