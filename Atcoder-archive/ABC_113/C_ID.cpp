#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1e9;
using namespace std;
typedef long long ll;

int n,m;
ll p[100100], y[100100];
vector <ll> v[100100];

int main(){
  std::cin >> n >> m;
  rep(i,1,m+1){
    std::cin >> p[i] >> y[i];
    v[p[i]].push_back(y[i]);
  }
  rep(i,1,n+1){
    sort(all(v[i]));
  }
  rep(i,1,m+1){
    int ken = p[i];
    int city = lower_bound(all(v[ken]), y[i]) - v[ken].begin()+1;
    std::cout <<setw(6)<<setfill('0') <<ken <<setw(6)<<setfill('0')<< city << '\n';
  }

}
