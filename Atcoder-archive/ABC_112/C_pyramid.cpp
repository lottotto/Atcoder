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
int x[200], y[200];
ll h[200];

int main(){
  std::cin >> n;
  rep(i,1,n+1)std::cin >> x[i] >> y[i] >> h[i];

  rep(i,0,101)rep(j,0,101){
    std::vector<int> canH;
    rep(k,1,n+1){
      int tmp_H = h[k]+abs(x[k]-i)+abs(y[k]-j);
      canH.push_back(tmp_H);
    }
    rep(k,0,canH.size()){
      bool flag = true;
      int H = canH[k];
      rep(l,1,n+1){
        int temp_h = max(H-abs(x[l]-i)-abs(y[l]-j), 0);
        if(temp_h != h[l]){
          flag = false;
          break;
        }
      }
      if(flag){
        std::cout << i << ' '<<j<<' '<<H<< '\n';
        return 0;
      }

    }

  }

}
