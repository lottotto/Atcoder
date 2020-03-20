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
typedef pair<int,int> p;

int n,s[200],ans;
int sum = 0;

int main(){
  cin >> n;
  rep(i,0,n){
    cin >> s[i];
    sum += s[i];
  }
  sort(s,s+n);
  if(sum%10==0){
    ans = 0;
    rep(i,0,n){
      if((sum - s[i])%10 != 0){
        ans = sum - s[i];
        break;
      }
    }
  }else ans = sum;
  cout << ans << endl;


}
