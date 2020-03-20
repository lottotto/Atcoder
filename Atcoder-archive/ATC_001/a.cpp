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
int H,W;
int sx,sy,gx,gy;
char c[501][501];
bool reached[501][501];
// void search(int x, int y); //c++は関数の事前宣言が必要
void search(int x,int y){
  if(x<0||W<=x||y<0||y<0||H<=y||c[y][x]=='#'){
    return;
  }
  if(reached[y][x]){
    return;
  }
  reached[y][x] =true;
  search(x-1,y);
  search(x+1,y);
  search(x,y-1);
  search(x,y+1);
}
int main(){
  std::cin >> H>>W;
  rep(i,0,H){
    rep(j,0,W){
      cin >> c[i][j];
      if(c[i][j]=='s'){
        sy=i;sx=j;
      }else if(c[i][j]=='g'){
        gy=i;gx=j;
      }
    }
  }
  search(sx,sy);
  if(reached[gy][gx]){
    std::cout << "Yes" << '\n';
  }else{
    std::cout << "No" << '\n';
  }

}
