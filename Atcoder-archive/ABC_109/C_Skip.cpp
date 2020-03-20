#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;
ll a;
ll n,X;
ll x[100100];

ll gcd(ll a, ll b){
  return a%b!=0 ? gcd(b, a%b): b;
}

int main() {
  std::cin >> n >> X;
  rep(i,1,n+1){
    std::cin >> x[i];
    x[i] = abs(X - x[i]);
  }
  ll tmp = x[1];
  rep(i,2,n+1){
    tmp = gcd(tmp, x[i]);
  }
  std::cout << tmp << '\n';

}
