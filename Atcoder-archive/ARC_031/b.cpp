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

//到達判定は塗りつぶしていけばいい！->迷路を壁にしていく.
//all cell is wall => the maze can reach all cell.
//x座標とy座標の区別に気をつけること。
char c[10][10];
char reached[10][10];
void search(int x,int y){
  if(x<0||10<=x||y<0||10<=y)return;
  if(reached[y][x]=='x')return;
  reached[y][x]='x';
  search(x-1,y);
  search(x+1,y);
  search(x,y-1);
  search(x,y+1);
}
bool check(char map[10][10]){
  rep(i,0,10){
    rep(j,0,10){
      if(map[i][j]=='o')return false;
    }
  }
  return true;
}
void copy(){
  rep(i,0,10){
    rep(j,0,10){
      reached[i][j] = c[i][j];
    }
  }
}

int main(){
  rep(i,0,10){
    rep(j,0,10){
      std::cin >> c[i][j];
    }
  }
  int init_i,init_j;
  rep(i,0,10){
    rep(j,0,10){
      if (c[i][j] == 'o'){
        init_i = i;
        init_j = j;
        }
    }
  }

  rep(i,0,10){
    rep(j,0,10){
            copy();
            reached[i][j] = 'o';
            search(j,i);
            if(check(reached)){
              std::cout << "YES" << '\n';
              return 0;
              }
        }
      }
  std::cout << "NO" << '\n';
  return 0;


}
