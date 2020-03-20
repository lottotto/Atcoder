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

ll H,W,A,B,C,h,w,Min,Max;

int main(){
  ll ans = INTMAX;
  cin >> H >> W;
  if(H>W)swap(H,W);
  rep(i,1,H){
    A = W*i;
    //縦に分割
    B = ((H-i)/2)*W;
    C = H*W-A-B;
    Min = min(A, min(B,C));
    Max = max(A, max(B,C));
    ans = min(ans, abs(Max-Min));

    //横に分割
    B = (W/2)*(H-i);
    C = H*W-A-B;
    Min = min(A, min(B,C));
    Max = max(A, max(B,C));
    ans = min(ans, abs(Max-Min));
  }
  rep(i,1,W){
    A = H*i;
    //縦に分割
    B = ((W-i)/2)*H;
    C = H*W-A-B;
    Min = min(A, min(B,C));
    Max = max(A, max(B,C));
    ans = min(ans, abs(Max-Min));

    //横に分割
    B = (H/2)*(W-i);
    C = H*W-A-B;
    Min = min(A, min(B,C));
    Max = max(A, max(B,C));
    ans = min(ans, abs(Max-Min));
  }
  cout << ans <<endl;
}
