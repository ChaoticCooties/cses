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

int main() {
  fast

      int noTests;
  fastscan(noTests);

  vector<ll> sol;

  for (int i = 0; i < noTests; i++) {
    ll rowCol[2];
    ll ans;

    // row and column input
    for (int i = 0; i < 2; i++) {
      scanf("%lld", &rowCol[i]);
    }

    if (rowCol[0] >= rowCol[1]) {
      // Bottom left
      if (rowCol[0] % 2) {
        ll bottomLeft = (ll)((rowCol[0] - 1) * (rowCol[0] - 1) + 1);
        ans = bottomLeft + (rowCol[1] - 1);
      } else {
        ll bottomLeft = (ll)rowCol[0] * rowCol[0];
        ans = bottomLeft - (rowCol[1] - 1);
      }
    } else {
      // Top right
      if (rowCol[1] % 2) {
        ll topRight = (ll)rowCol[1] * rowCol[1];
        ans = topRight - (rowCol[0] - 1);
      } else {
        ll topRight = (ll)((rowCol[1] - 1) * (rowCol[1] - 1) + 1);
        ans = topRight + (rowCol[0] - 1);
      }
    }

    sol.pb(ans);
  }

  for (int i = 0; i < sol.size(); i++) {
    cout << sol[i] << endl;
  }

  return 0;
}
