#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

string s;

int main(){
  std::cin >> s;
  int tmp = MAX;
  int res;
  rep(i,0,s.size()-2){
    int x = 100*(s[i]-'0')+10*(s[i+1]-'0')+(s[i+2]-'0');
    if(abs(753-x) < tmp){
      tmp = abs(x-753);
      res = x;
    }
  }
  std::cout <<tmp << '\n';
}
