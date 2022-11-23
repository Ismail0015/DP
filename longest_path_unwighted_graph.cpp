#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int sz = 1e5+5;
vector<int>v[sz], ans; int vis[sz], dp[sz], mx, c;
int dfs(int x){
     if(dp[x] > 0)return dp[x];
     for(auto i:v[x]){
         dp[x] = max(dfs(i)+1, dp[x]);
     }
     return dp[x];
}
int32_t main(){
     int n, m; cin >> n >> m;
     for(int i = 0; i < m; i++){
        int a, b;cin >> a >> b;
        v[a].push_back(b);
     }
     for(int i = 1; i <= n; i++){
      mx = max(dfs(i), mx);
     }
     //for(int i = 1; i <= n; i++)cout << ans[i] << " ";
     cout << mx;
}

