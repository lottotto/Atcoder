// 最長共通部分裂問題

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


int n;
int main(){
	cin >> n;
	for(int a = 0; a < n; a++){
		string x,y;
		cin >> x;
		cin >> y;

		// dp start
		int W = x.size(); int H = y.size();
		int dp[H+1][W+1] = {0};
		for(int i = 0; i < H+1; i++){
			dp[i][0] = 0;
		}
		for(int i = 0; i < W+1; i++){
			dp[0][i] = 0;
		}
		for(int i = 1; i < H+1; i++){
			for(int j = 1; j < W+1; j++){
				if(x[j-1] == y[i-1]){
					dp[i][j] = max(max(dp[i-1][j-1] + 1, dp[i-1][j]), dp[i][j-1]);
				}else{
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		// for(int i = 0; i < H+1; i++){
		// 	for(int j = 0; j < W+1; j++)cout << dp[i][j] << " ";
		// 	cout << endl;
		// }

		cout << dp[H][W] << endl;
	}
}