#include<bits/stdc++.h>

#define rep(i, a, n)  for(ll i=a; i<n; i++)
#define per(i, a, n)  for(ll i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define LONGMAX 1e18
#define INTMAX 1000000000
using namespace std;
typedef long long ll;
typedef pair<ll,ll> p;

ll n;
vector<ll> city(6,0);
vector<ll> way(5,0);

int main(){
  cin >> n;
  for(int i=0;i<5;i++){
    cin >> way[i];
  }
  ll Min = *min_element(all(way));
  ll ans1 = ceil(n*1.0/Min) + 4;
  ll ans2 = ceil(n/Min) + 4; // int/int で2 に変換されてしまうためdouble型にする
  cout << ans1 << endl;
  cout << ans2 << endl;
}