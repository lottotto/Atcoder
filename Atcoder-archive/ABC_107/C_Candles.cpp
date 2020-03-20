#include<bits/stdc++.h>

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define per(i, a, n)  for(int i=n-1; i>=a; i--)
#define fill0(n)  setfill('0') << right << setw(n)
#define all(x)  (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1000000001
using namespace std;
typedef long long ll;

int n,k;
int x[100100];

int main(int argc, char const *argv[]) {

  std::cin >> n >> k;
  rep(i,1,n+1){
    std::cin >> x[i];
  }
  int res = MAX;
  rep(i,1,n-k+2){
    int left = abs(x[i]);
    left += abs(x[i+k-1] - x[i]);
    int right = abs(x[i+k-1]);
    right += abs(x[i] - x[i+k-1]);
    int tmp = min(left, right);
    res = min(res, tmp);
  }
  std::cout << res << '\n';
}
