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

int n;
ll a[100100];

int main(){
  cin >> n;
  rep(i,1,n+1)cin >> a[i];
  ll check = 0;
  ll ans=0;
  //正負正負正負、、、のパターン
  rep(i,1,n+1){
    check +=a[i];
    if(i%2!=0 && check <=0){
      ans += abs(1-check);
      check = 1;

    }else if(i%2==0 && check >=0){
      ans += abs(check+1);
      check = -1;
    }
  }
  //負正負正負正負正のパターン
  check = 0;
  ll tmp = 0;
  rep(i,1,n+1){
    check += a[i];
    if(i%2!=0 && check >= 0){
      tmp += abs(check+1);
      check = -1;
    }else if(i%2==0 && check <= 0){
      tmp +=abs(1-check);
      check = 1;
    }
    // cout << a[i] <<"\t"<< check << endl;
  }
  cout << min(tmp,ans)<< endl;
}
