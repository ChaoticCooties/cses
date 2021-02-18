#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

void output(vector<string> permutations) {
    cout << permutations.size() << endl;
    for (auto s : permutations) {
        cout << s << endl;
    }
}

int main() {
  fast string n;
  getline(cin, n);
  vector<string> permutations;
  sort(n.begin(), n.end());

  permutations.pb(n);

  while (next_permutation(n.begin(), n.end())) {
    permutations.pb(n);
  }

  output(permutations);

  return 0;
}
