#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string chars;
  char current;
  int count = 1;
  int most = 1;

  // Get input
  cin >> chars;

  for (int i = 0; i < chars.length(); i++) {
    if (chars[i] == current) {
      most = max(most, ++count);
    } else {
      count = 1;
      current = chars[i];
    }
  }

  // Print
  cout << most << '\n';
}
