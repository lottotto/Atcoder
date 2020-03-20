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

int a,b,c,d,e;
vector<int> v(5,0);

int main(){
  for(int i=0;i<5;i++) cin >> v[i];
  int last_index=0;
  for(int i=0; i<5;i++){
    if(v[last_index]%10 > v[i]%10 && v[i]%10 != 0)last_index = i;
  }
  int ans=0;
  for(int i=0;i<5;i++){
    int tmp;
    if(v[i]%10==0 || i== last_index)tmp = v[i];
    else tmp = ((int) (v[i]/10)+1)*10;
    ans += tmp;
  }
  cout << ans<< endl;
}