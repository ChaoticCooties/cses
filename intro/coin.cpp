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
  // Number of tests
  fast int t;
  fastscan(t);

  vector<string> ans;
  for (int i = 0; i < t; i++) {
    // Get number of coins in piles
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    // Impossible 
    int sum = a + b;
    if (sum % 3 == 0 && a <= 2 * b && b <= 2 * a) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


  }

  return 0;
}
