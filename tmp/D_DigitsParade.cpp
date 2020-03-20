#include <bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define intMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
const ll mod = 1e9+7;

string s;
ll dp[100100][13];

int main(){
	// 教訓: DPまではOK．漸化式の導出のヒントになるものは桁数と，割り算のあまりの数
	// ゆっくり落ち着いて漸化式を建てること．
	cin >> s;
	int n = s.size();
	dp[0][0]=1;
	// 桁についてループ
	for(int i = 0; i < n; i++){
		int c;
		if(s[i] == '?') c = -1;
		else c = s[i] - '0';
		// ? だった場合の全処理
		for(int j = 0; j < 10; j++){
			if (c != -1 && c != j)continue;
			
			//i-1文字目までの数が[ki]の時に，それを１０倍してjを加えた部分に
			// あまりはうつるよね？
			for(int ki = 0; ki < 13; ki++){
				dp[i+1][(ki * 10 + j) % 13] += dp[i][ki];
			}
		}
		for(int j = 0; j < 13; j++)dp[i+1][j] %= mod;
	}

	cout << dp[n][5] << endl;
	return 0;

}