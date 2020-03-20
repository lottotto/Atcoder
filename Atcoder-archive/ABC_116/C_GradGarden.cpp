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
int h[200];


int main(int argc, char const *argv[]) {
  std::cin >> n;
  h[0] = 0;
  rep(i,1,n+1)std::cin >> h[i];
  h[n+1] = 0;
  ll res = 0;
  rep(i,0,n){
    if(h[i+1]>h[i]) res+= h[i+1] - h[i];
  }
  std::cout << res << '\n';

  return 0;
}
