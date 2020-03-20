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


// 大きい方から決めていって，x以上の倍数が存在する
// 例えばx = 3に対して，６の箱があるとき．
// sumなるものに数を記録していき，そこに入れる
int n;

int main(){
	cin >> n;
	vector<int> a(n+1);
	for(int i = 1; i < n+1; i++)cin >> a[i];
	vector<int> b(n+1); //答えが入る配列
	for(int i = n; i >= 1; i--){
		int sum = 0; //iの倍数
		//でかい方からやって，n/2まではとりあえず実行しない
		for(int j = i+i; j<=n; j+=i){
			sum ^= b[j];	
		}
		b[i] = sum^a[i];
	}
	vector<int> ans;
	for(int i=1; i<n+1; i++){
		if(b[i]==1)ans.push_back(i);
	}
	cout << ans.size() <<endl;
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}