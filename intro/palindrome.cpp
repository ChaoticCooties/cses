#include <deque>
#include <iostream>
#include <unordered_map>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define MOD 1000000007
#define ASCII_SIZE 256

using namespace std;

void output(deque<char> d) {
  for (char c : d) {
    cout << c;
  }
  cout << endl;
}

int main() {
  // Get input
  fast string input;
  getline(cin, input);

  // Init map for char count
  unordered_map<char, int> chars;
  char uniq = '\0';

  // Build char count
  for (unsigned i = 0; i < input.length(); i++) {
    chars[input[i]]++;
  }

  // Scan for the odd char. Throw error if more than one
  for (auto c : chars) {
    if (c.second % 2) {
      if (uniq == '\0') {
        uniq = c.first;
      } else {
        cout << "NO SOLUTION" << endl;
        return 0;
      }
    }
  }

  // Bulid answer string
  deque<char> ans;
  if (uniq != '\0') {
    ans.push_back(uniq);
  }

  for (auto c : chars) {
    int *charCount = &c.second;
    while (*charCount >= 2) {
      ans.push_front(c.first);
      ans.push_back(c.first);
      *charCount -= 2;
    }
  }

  output(ans);
  return 0;
}
