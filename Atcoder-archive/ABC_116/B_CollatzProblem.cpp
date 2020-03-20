#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

ll s;
bool check[1000000000];

ll f(ll x){
  return (x%2!=0? 3*x+1:x/2);
}
int main(int argc, char const *argv[]) {
  std::cin >> s;
  ll cnt = 1;
  rep(i,0,1000000000)check[i] = false;
  check[s] = true;
  while(true){
    ll tmp = f(s);
    cnt++;
    if(check[tmp])break;
    check[tmp]=true;
    s = tmp;
  }
  std::cout << cnt << '\n';
}
