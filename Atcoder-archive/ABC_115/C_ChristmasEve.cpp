#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

ll n,k;
ll h[100100];

int main(){
  std::cin >> n >> k;
  rep(i,1,n+1)std::cin >> h[i];
  sort(h+1, h+n+1);
  ll res = MAX;
  rep(i,1,n-k+2){
    ll tmp = h[i+k-1] - h[i];
    res = min(res, tmp);
  }
  std::cout << res << '\n';
}
