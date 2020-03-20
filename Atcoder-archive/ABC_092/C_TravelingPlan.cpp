#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

int n;
int a[100100];

int main(){
  std::cin >> n ;
  a[0] = 0;
  rep(i,1,n+1)std::cin >> a[i];
  a[n+1] = 0;
  ll all=0;
  rep(i,1,n+2){
    all += abs(a[i]-a[i-1]);
  }
  rep(i,1,n+1){
    ll res = all +abs(a[i+1]-a[i-1]) -abs(a[i+1]-a[i])-abs(a[i]-a[i-1]);
    std::cout << res << '\n';
  }
}
