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
long long float x;
string u;

int main(){
  std::cin >> n;
  ll res = 0;
  rep(i,1,n+1){
    std::cin >> x >> u;
    if(u == "JPY")res += x;
    else res += x*380000.0;
  }
  std::cout << res << '\n';
}
