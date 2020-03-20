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

//全て赤coderの時の最小値はゼロじゃないよ

int n;
int a[200];
int colors[9];

int main(){
  cin >> n;
  rep(i,0,n){
    cin >>a[i];
    if(a[i]>=3200)colors[8]++;
    else colors[a[i]/400]++;
  }
  int min = 0;
  rep(i,0,8){
    if(colors[i]!=0)min++;
  }
  int max;
  max = min + colors[8];
  if(colors[8]==n){
    min=1;max = n;
  }
  cout << min << ' ' << max << endl;

}
