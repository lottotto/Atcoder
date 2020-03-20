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
string s;
// int a = 1<<(s.size()-1);// int->2^intに変換
// int a = s[0]-'0'; // char →　int に変換
// std::cout << (a == s[0]) << '\n';
int main(){
  std::cin >> s;
  ll res = 0;
  rep(i,0,(1<<s.size()-1)){
    ll tmp = s[0]-'0';
    rep(j,1,s.size()){
      if(i&(1<<(j-1))){
        res+=tmp;
        tmp=0;
      }
      tmp*=10;
      tmp+=s[j]-'0';
    }
    res+=tmp;
  }
  std::cout << res << '\n';
}
