#include<bits/stdc++.h>
using namespace std;
int main(){

         int n, a, b, c; cin >> n; //int start[n+1], end[n+1], profit[n+1];
         vector<vector<int>>v;
         for(int i = 0; i < n; i++){
            cin >> a>> b >>c; v.push_back({a,b,c});
         }
         sort(v.rbegin(), v.rend());

         int ans = 0, pro = 0; map<int,int>mp;
         for(int i = 0; i < n; i++){
             pro = v[i][2];
             auto it = mp.lower_bound(v[i][1]);
             if(it != mp.end()){
                    pro += it->second;
             }

             ans = max(pro, ans);
             mp[v[i][0]] = ans;
         }cout << ans;

 }
