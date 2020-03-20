#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

int n,m;
int x[100100];
int l[100100];

int main(int argc, char const *argv[]) {
  std::cin >> n >> m;
  rep(i,1,m+1)std::cin >> x[i];
  if(n>=m){
    std::cout << "0" << '\n';
    return 0;
  }
  sort(x+1, x+m+1);
  rep(i,1,m)l[i]=x[i+1]-x[i];
  sort(l+1,l+m);
  ll ans = 0;
  rep(i,1,m-n+1)ans+=l[i];
  std::cout << ans << '\n';
}
