#include <iostream>
#include <string>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

using namespace std;

/* Split the vector numbers into odd-even buckets
 * then concatenate the buckets together
 *
 * O(n) solution
 */

void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // Get input
  int input;
  scanf("%d", &input);

  // Edge case
  if (input != 1 && input < 4) {
    cout << "NO SOLUTION" << '\n';
  } else {
    // Even numbers
    for (int i = 2; i <= input; i += 2) {
      cout << i << ' ';
    }

    // Odd numbers
    for (int i = 1; i <= input; i += 2) {
      cout << i << ' ';
    }
  }

  return 0;
}
