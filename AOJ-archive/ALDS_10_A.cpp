#include <bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000

using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod = 1e9+7;
const long double EPS = 0.0000000001;


int n;
int main(){
	int dp[50];
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 0; i < 50; i++){
		if(i > 1){
			dp[i] = dp[i-1]+dp[i-2];
		}
	}
	cin >> n;
	cout << dp[n] << endl;
}