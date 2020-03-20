
#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1e9
using namespace std;
typedef long long ll;

ll x,y;

int main(){
  cin >> x >> y;
  ll tmp = x;
  ll res = 0;
  while(tmp <= y){
    tmp *=2;
    res++;
  }
  std::cout << res << '\n';
}
