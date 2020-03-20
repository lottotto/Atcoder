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
int p[10100];

int main(){
  std::cin >> n;
  rep(i,1,n+1)std::cin >> p[i];
  sort(p+1, p+n+1);
  int res;
  rep(i,1,n){
    res += p[i];
  }
  res += p[n]*0.5;
  std::cout << res << '\n';
}
