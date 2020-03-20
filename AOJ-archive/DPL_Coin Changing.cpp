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
typedef pair<ll ,ll> P;
const ll mod = 1e9+7;
const long double EPS = 0.0000000001;

int n,m;
int main(){
	cin >> n >> m;
	vector<int>c(m);
	for(int i = 0; i < m; i++)cin >> c[i];

	int dp[50050];
	for(int i = 0; i < n+1; i++)dp[i] = INTMAX;
	dp[0] = 0;
	for(int i = 0; i < n+1; i++){
		for(int j = 0; j <= c[m-1]; j++){
			if(i - c[j] >= 0){
				int tmp = dp[i - c[j]] + 1;
				dp[i] = min(tmp , dp[i]);
			}
		}
	}
	// for(int i = 0; i < n+1; i++)cout << dp[i] << " ";
	// cout << endl;
	cout << dp[n] << endl;
}