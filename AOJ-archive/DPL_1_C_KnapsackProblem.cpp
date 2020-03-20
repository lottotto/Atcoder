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

int n, w;
int main(){
	cin >> n >> w;
	vector<int> weight(n), value(n);
	for(int i = 0; i < n; i++)cin  >> value[i] >> weight[i];
	ll dp[n+1][w+1];
	for(int i = 0; i < n+1; i++){
		for(int j = 0; j < w+1; j++){
			dp[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++){ // 品物の数
		for(int j = 0; j < w+1; j++){ // 重さの数
			for(int k = 0; k < i+1; k++){
				if(j - weight[k] >= 0){
					ll tmp = dp[i+1][j - weight[k]] + value[k];
					// printf("dp[%d+1][%d] = max(%d, %d) \n", i,j,tmp, dp[i][j]);
					dp[i+1][j] = max(tmp, dp[i][j]);
				} else {
					dp[i+1][j] = dp[i][j];
				}
			}
		}
	}
	cout << dp[n][w] << endl;

}