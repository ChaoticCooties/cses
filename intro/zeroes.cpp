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
  fast int n;
  fastscan(n);

  int zeros = 0;
  
  // Prime factorization of 2 & 5 to get 10
  // f(2) >= f(5) where f() is the number of occurences
  for (int i = 5; n / i >= 1; i *= 5) {
      zeros += n/i;
  }

  cout << zeros << endl;

  return 0;
}
