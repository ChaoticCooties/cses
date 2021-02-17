#include <iostream>
#include <math.h>
#include <vector>

#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define MOD 1000000007

using namespace std;

int main() {
  fast ll n;
  cin >> n;

  // Number of bit strings 2^n
  ll ans = 1;
  for (ll i = 0; i < n; i++) {
    ans = (ans * 2) % MOD;
  }

  cout << ans << endl;

  return 0;
}
