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
int a,b,c;
int l[20];

ll dfs(int cur, int A, int B, int C){
  if(cur==n+1){
    if(A==0 || B==0 || C==0)return MAX;
    ll ret = abs(a-A)+abs(b-B)+abs(c-C)-30;
    return ret;
  }

  // ll res = MAX;
  ll res0 = dfs(cur+1, A, B, C);
  ll res1 = dfs(cur+1, A+l[cur], B, C)+ 10;
  ll res2 = dfs(cur+1, A, B+l[cur], C)+ 10;
  ll res3 = dfs(cur+1, A, B, C+l[cur])+ 10;

  return min(res0,min(res1,min(res2,res3)));
}

int main(){
  std::cin >> n >> a>>b>>c;
  rep(i,1,n+1)std::cin >> l[i];
  std::cout << dfs(1,0,0,0) << '\n';
  return 0;
}
