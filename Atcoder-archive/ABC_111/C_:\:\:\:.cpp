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
int v[100100];
// int e[100100], o[100100];
std::vector<int> e(100100,0);
std::vector<int> o(100100,0);

ll sum(std::vector<int> v){
  ll ret = 0;
  rep(i,0,v.size())ret+=v[i];
  return ret;
}
ll max_arg(std::vector<int> v){
  ll tmp = v[0];
  ll ret = 0;
  rep(i,1, v.size()){
    if(v[i] > tmp){
      ret = i;
      tmp = v[i];
    }
  }
  return ret;
}

int main(){

  std::cin >> n;
  rep(i,1,(n/2)+1){
    int tmp_o,tmp_e;
    std::cin >> tmp_o;
    std::cin >> tmp_e;
    e[tmp_e]++;
    o[tmp_o]++;
  }
  int E_1 = max_arg(e);
  int O_1 = max_arg(o);
  // std::cout << E_1 <<' '<< O_1 << '\n';
  ll res;
  if(E_1 != O_1){
    res = sum(e) - e[E_1];
    res += sum(o) - o[O_1];
  }else{
    int temp_E_1 = e[E_1];
    int temp_O_1 = o[O_1];
    e[E_1] = 0; o[O_1] = 0;
    int E_2 = max_arg(e);
    int O_2 = max_arg(o);
    // std::cout << E_2<<' '<<O_2 << '\n';
    e[E_1] = temp_E_1; o[O_1] = temp_O_1;
    res = sum(e) - e[E_2];
    res += sum(o) - o[O_1];
    ll tmp = sum(e) - e[E_1];
    tmp += sum(o) -o[O_2];
    // std::cout << res << ' '<< tmp << '\n';
    res = min(res,tmp);
  }
  std::cout << res << '\n';
  // std::cout << res << '\n';
}
