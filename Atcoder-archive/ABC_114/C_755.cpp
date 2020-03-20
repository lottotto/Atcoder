#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001;
using namespace std;
typedef long long ll;

ll n;

int dfs(ll num){
  int ret;
  ll tmp_num = num;
  if(tmp_num > n)return 0;
  // std::cout << num << '\n';
  bool three_flag = false;
  bool five_flag=false;
  bool seven_flag=false;
  while(tmp_num > 0){
    if(tmp_num%10==3)three_flag=true;
    if(tmp_num%10==5)five_flag=true;
    if(tmp_num%10==7)seven_flag=true;
    tmp_num /= 10;
  }
  if(three_flag && five_flag && seven_flag){
    // std::cout << "/* message */" << '\n';
    ret = 1;
  }

  else ret = 0;
  for(ll i=0; i<3; i++){
    if(i==0)ret += dfs(num*10+3);
    if(i==1)ret += dfs(num*10+5);
    if(i==2)ret += dfs(num*10+7);
  }
  return ret;
}


int main(){
  std::cin >> n;
  std::cout << dfs(0) << '\n';

}
