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

int n;
vector <ll> vx;
ll x[200100];

int main(){
  cin >> n;
  rep(i,1,n+1){
    cin >> x[i];
    vx.push_back(x[i]);
  }
  sort(all(vx));
  ll med1 = vx[n/2-1];
  ll med2 = vx[n/2];
  rep(i,1,n+1){
    int hoge = lower_bound(all(vx), x[i])-vx.begin()+1;
    if(hoge <= n/2)std::cout << vx[n/2] << '\n';
    else std::cout << vx[n/2-1] << '\n';
  }
}
