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
//n= 10^5クラスの計算の時、O(n^2)以上はほぼ無理だと思え！
int n;
int a[200200];

int main(){
  cin >> n;
  rep(i,0,n)cin >> a[i];
  int b[n];
  if(n%2==0){
    rep(i,0,n){
      int k = i/2;
      if(i%2==0)b[n/2 + k] = a[i];
      else b[n/2 - (k+1)] = a[i];
    }
  }else{
    rep(i,0,n){
      int k= i/2;
      if(i%2==0)b[n/2 - k] = a[i];
      else b[n/2 + (k+1)] = a[i];
    }
  }
  rep(i,0,n)cout << b[i] << ' ';
  cout << endl;
}
