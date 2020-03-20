#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;


string s, t;
int a[30],b[30];


int main(){
  std::cin >> s >> t;
  rep(i,0,s.size()){
    a[s[i]-'a']++;
    b[t[i]-'a']++;
  }
  sort(a,a+26); sort(b,b+26);
  bool flag = true;
  rep(i,0,26){
    if(a[i]!= b[i]) flag = false;
  }
  std::cout << (flag ? "Yes":"No") << '\n';
}
