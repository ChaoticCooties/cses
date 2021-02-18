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

void output(vector<vector<int>> v) {
  for (auto i = v.begin(); i < v.end(); i++) {
    // iterate each subset
    vector<int> subset = *i;
    for (int j = 0; j < subset.size(); j++) {
      cout << subset[j] << ' ';
    }

    cout << endl;
  }
}

/*
 * Generate subsets
 * Input:
 * 3 (no of elements in set)
 * 2
 * 3
 * 4
 * {2,3,4}
 *
 * Output :
 * Subsets of all {2,3,4}
 */
int main() {

  // Get num elements
  fast int n;
  fastscan(n);
  // cout << "N Elements: " << n << endl;

  vector<int> mainSet;
  vector<vector<int>> ans;

  // Add all numbers into mainSet
  for (int i = 0; i < n; i++) {
    int element;
    fastscan(element);
    // cout << "Element: " << element << endl;
    mainSet.pb(element);
  }

  // Generate 0 - 2^n
  for (int i = 0; i < (1 << n); i++) {
    vector<int> subset;
    // Bit masking to generate ans
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        subset.pb(mainSet[j]);
        // cout << mainSet[j] << " push back'd" << endl;
      }
    }

    // Add to list 
    ans.pb(subset);
  }

  // Output
  output(ans);

  return 0;
}
