#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

//Union-find
vector<ll> parent, size, depth;
void init(ll n){
  for(ll i = 0; i < n; i++){
    parent.push_back(i);
    depth.push_back(0);
    size.push_back(1);
  }
}

ll root(ll x){
  if(parent[x] == x)return x;
  else return root(parent[x]);
}

void unite(ll x, ll y){
  x = root(x);
  y = root(y);
  if(x == y) return; //一緒の連結成分であった時
  if(depth[x] < depth[y]){
    parent[x] = y; //yの方が深いので，xの親をyに変更
    size[y] += size[x];
  }else{
    parent[y] = x;
    size[x] += size[y];
    if(depth[x] == depth[y])depth[x]++; //xとyの深さが同じ時は，xの下にyを付け加えることに
  }
}
ll treesize(ll x){
  return size[root(x)];
}

//Union-find部分ここまで