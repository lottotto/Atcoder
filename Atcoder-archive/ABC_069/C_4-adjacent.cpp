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
//2をどれくらい持っているかどうかを判別
//n:奇数→両端が1を持ってなくてOK。n:偶数→どっちかは、、、みたいな？
int main(){
  cin >> n;
  string ans ="Yes";
  ll x = 0;
  rep(i,0,n){
    cin >> a[i];
    if(a[i]%4==0)x+=2;
    else if(a[i]%2==0)x++;
  }
  // cout << x << endl;
  if(n%2!=0 && x+1 < n)ans="No";
  if(n%2==0 && x < n)ans="No";
  cout << ans << endl;

}
