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
#include<queue>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000001
using namespace std;
typedef long long ll;

int n,m;
int x[150], y[150];
bool graph[15][15];

int check(std::vector<int> v){
  rep(i, 0,v.size()){
    rep(j, 0,v.size()){
      int a = v[i];int b = v[j];
      if(!graph[a][b])return 0;
    }
  }
  // std::cout << v.size() << '\n';
  return v.size();
}
void print(std::vector<int> v){
  rep(i,0,v.size()){
    std::cout << v[i];
  }
}

int main(){
  std::cin >> n >> m;
  rep(i,1,n+1)graph[i][i]=true;
  rep(i,1,m+1){
    std::cin >> x[i]>>y[i];
    graph[x[i]][y[i]] = true;
    graph[y[i]][x[i]] = true;
  }
  int tmp = 0;
  std::vector<int> v;
  rep(i,0,(1<<n)){
    rep(j,0,n){
      if(i&(1<<j)){
        v.push_back(j+1);
      }
    }
    tmp = max(tmp, check(v));
    v.clear();
  }
  std::cout << tmp << '\n';

}
