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

void output(vector<vector<int>> v) {
  for (auto vi : v) {
    for (auto i : vi) {
      cout << i;
    }

    cout << endl;
  }
}

void search(int i, int n) {
  vector<int> code;
  for (int j = 0; j < n; j++) {
    if ((i >> j) & 1) {
      code.pb(1);
    } else {
      code.pb(0);
    }
  }
}

int main() {
  fast int n;
  fastscan(n);
  vector<vector<int>> graycode;

  for (int i = 0; i < (1 << n); i++) {
    vector<int> code;
    code.pb(i ^ (i >> 1));
  }

  graycode.pb(code);

  // sort(graycode.begin(), graycode.end());
  output(graycode);

  return 0;
}
