#include<bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<int,int> p;

int n;
ll a[100100];
map<ll, int> mp;
vector <ll> v;

int main(){
  cin >> n;
  rep(i,0,n){
    cin >> a[i];
    mp[a[i]]++;
    if(mp[a[i]] == 2)v.push_back(a[i]);
  }
  ll ans;
  if(v.size()<2)ans=0;
  else{
    sort(rall(v));
    if(mp[v[0]] >= 4)ans = v[0]*v[0]; //　最大の辺が４本以上ある場合はそれで正方形を作るのが答え
    else ans = v[0]*v[1];
  }
  cout << ans << endl;

}
