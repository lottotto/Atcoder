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
int t[100100],x[100100],y[100100];

bool judge(int delta_t, int src_x,int src_y, int dst_x, int dst_y){
  int min_distance = abs(dst_x-src_x)+abs(dst_y-src_y);
  if(min_distance > delta_t)return false;
  if(min_distance%2!=0){
    if(delta_t%2!=0)return true;
  }else{
    if(delta_t%2==0)return true;
  }
  return false;
}

int main(){
  std::cin >> n;
  rep(i,1,n+1)std::cin >> t[i] >> x[i] >> y[i];
  t[0] = 0;x[0]=0;y[0]=0;
  string ans = "Yes";
  rep(i,1,n+1){
    if(!judge(t[i]-t[i-1], x[i-1],y[i-1], x[i],y[i]))ans="No";
  }
  cout << ans<<endl;

}
