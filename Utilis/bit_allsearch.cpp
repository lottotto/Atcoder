#include<bits/stdc++.h>

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

int n,m;

int main(){
  cin >> n >> m;
  vector<int>p(m);
  vector<vector<int>>s(m);

  for(int i = 0; i < m; i++){
    int k;cin >> k;
    vector<int>v(k);
    for(int j = 0; j < k; j++){
      cin >> v[j];
      v[j]--; //スイッチを0からm-1までとする．
    }
    s[i] = v;
  }
  for(int i = 0; i < m; i++)cin >> p[i];

  int ans = 0;
  for(int i = 0; i<(1 << n); i++){  //bit全探査用
    bool check = true;

    for(int j = 0; j < m; j++){ //switch j についての点灯状況を判断
      int c = 0;
      for(int k = 0; k < s[j].size(); k++){ 
        if((i >> s[j][k]) & 1)c++;//  iをs[j][k]分bitを動かして下1bitが0 or 1を判断する．
      }
      c %= 2;
      if(c != p[j]) check = false;
    }
    if(check)ans++;
  }

  cout << ans << endl;
}