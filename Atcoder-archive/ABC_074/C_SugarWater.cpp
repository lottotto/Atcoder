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
typedef pair<int,int> p;

int a,b,c,d,e,f;
int water, sugar;

int main(){
  cin >> a >> b >> c >> d >> e >> f;
  int a100 = 100*a;
  int b100 = 100*b;
  double temp_dense = 0.0;
  double temp_sugar = 0;
  double temp_water = a100;
  rep(i,0,31){
    rep(j,0,31){
      rep(k,0,100){
        rep(l,0,100){
          double water = a100*i+b100*j;
          double sugar = k*c+l*d;
          if(water==0||water+sugar > f||e * water/100 < sugar)break;
          double dense = double(100*sugar/(water+sugar));
          if(dense > temp_dense){
            temp_dense = 100*sugar/(water+sugar);
            temp_sugar = sugar;
            temp_water = water;
          }
        }
      }
    }
  }
  std::cout << temp_water+temp_sugar <<' '<<temp_sugar << '\n';
}
