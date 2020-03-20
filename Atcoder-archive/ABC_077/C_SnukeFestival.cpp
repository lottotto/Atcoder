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

int n;
int a[100100],b[100100],c[100100];

int main(){
  cin >> n;
  rep(i,1,n+1)cin >> a[i];
  rep(i,1,n+1)cin >> b[i];
  rep(i,1,n+1)cin >> c[i];

  sort(a+1,a+n+1);
  sort(c+1,c+n+1);

  ll res =0;
  rep(j,1,n+1){
    ll tmp_a = lower_bound(a+1,a+n+1, b[j]) - (a+1);
    ll tmp_c = c+n+1- upper_bound(c+1, c+n+1, b[j]);
    res += tmp_a*tmp_c;
  }
  cout << res<< endl;
}
