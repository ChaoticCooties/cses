#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string input1;
  getline(cin, input1);
  int size = stoi(input1);
  
  string input2;
  getline(cin, input2);
  stringstream s(input2);

  string buffer;
  unordered_set<int> us;

  while (getline(s, buffer, ' ')) {
      us.insert(stoi(buffer));
  }

  for (int i=1; i <= size; i++) {
      if (us.find(i) == us.end()) {
         // found non existent number
         cout << i << '\n';
         return 0;
      }
  }

  return 1;
}
