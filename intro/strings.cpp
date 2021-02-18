#include <iostream>
#include <set>
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

void permutate(set<vector<char>> &kStrings, vector<char> &permutations,
               string elements, vector<bool> &positions) {
  if (permutations.size() == elements.size()) {
    kStrings.insert(permutations);
  } else {
    for (int i = 0; i < elements.size(); i++) {
      if (positions[i]) {
        continue;
      }

      // permutate
      positions[i] = true;
      permutations.pb(elements[i]);
      permutate(kStrings, permutations, elements, positions);

      // reverse operation
      positions[i] = false;
      permutations.pop_back();
    }
  }
}

void output(set<vector<char>> kStrings) {
  cout << kStrings.size() << endl;
  for (auto v : kStrings) {
    for (auto c : v) {
      cout << c;
    }
    cout << endl;
  }
}

int main() {
  fast string n;
  getline(cin, n);

  set<vector<char>> kStrings;
  vector<char> permutations;
  vector<bool> completed(n.size(), false);

  permutate(kStrings, permutations, n, completed);
  output(kStrings);

  return 0;
}
