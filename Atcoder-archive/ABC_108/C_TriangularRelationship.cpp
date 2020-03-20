#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001
using namespace std;
typedef long long ll;

ll n,k;
ll res;

ll cub(ll x){
  return x*x*x;
}

int main() {
    ll n, k;
    cin >> n >> k;
    if(k%2){
      res = cub(n/k);
    }else{
      res = cub(n/(k/2) - n/k)+ cub(n/k);
    }
    std::cout << res << '\n';
    return 0;
}
