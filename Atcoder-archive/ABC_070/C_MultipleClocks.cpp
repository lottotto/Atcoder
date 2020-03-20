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
ll t[200];

ll gcd(ll a, ll b){
  if(a%b!=0)return gcd(b,a%b);
  else return b;
}
ll lcm(ll a, ll b){
  ll hoge = b/gcd(a,b);
  return a*hoge;
}

int main(){
  cin >> n;
  cin >> t[0];
  ll x = t[0];
  rep(i,1,n){
    cin >> t[i];
    x = lcm(t[i], x);
  }
  cout << x << endl;

}
