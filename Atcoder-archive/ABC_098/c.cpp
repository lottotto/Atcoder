#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<map>
#include<numeric>
#include<set>
#include<string>
#include<utility>
#include<vector>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

int calc_num(vector<int> v, int i, int n){

  int ret_val = 0;
  vector<int> w,e;
  rep(j,0,i){
    w[j] = v[j];
  }

  rep(j,0,n){
    if(j==i){
    }else if(j > i){
      if(v[j]==1)ret_val++;
    }else if(j < i){
      if(v[j]==0)ret_val++;
    }
  }
  return ret_val;
}

int main(){
  int n; cin>>n;
  string s; cin >> s;
  std::vector<int> left(n,0), right(n,0);
  if(s[0]=='W')left[0]=1;
  if(s[n-1]=='E')right[n-1]=1;
  rep(i,1,n){
    left[i] += left[i-1];
    if(s[i] == 'W') left[i]++;
    right[n-1-i] += right[n-i];
    if(s[n-1-i]=='E')right[n-1-i]++;
  }
  int ans = MAX;
  rep(i,0,n){
    // std::cout << left[i]<<' '<<right[i] << '\n';
    if(i==0)ans = min(ans, right[1]);
    else if (i==n-1) ans=min(ans, left[n-2]);
    else ans = min(ans, left[i-1]+right[i+1]);
  }
  std::cout << ans << '\n';
}
