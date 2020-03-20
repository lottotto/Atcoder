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

string s,t;

int main(){
  cin >>  s >>  t;
  string ans = "UNRESTORABLE";
  per(i,0,s.size()-t.size()+1){
    bool flag = true;
    rep(j,0,t.size()){
      if(s[i+j]!='?'&&s[i+j]!=t[j])flag=false;
    }
    if(flag){
      rep(j,0,t.size()){
        s[i+j]=t[j]; // sの部分をtに置換
      }
      while(s.find("?")!=string::npos){
        s.replace(s.find("?"), 1, "a");
      }
      ans = s;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
