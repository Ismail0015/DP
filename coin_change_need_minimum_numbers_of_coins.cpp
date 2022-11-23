#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, m;
   cin >> n >> m;
   int a[n+1];
   for(int i = 1; i <= n; i++)cin >> a[i];
   int dp[m+1];
   for(int i = 1; i <= m; i++)dp[i] = INT_MAX;
   dp[0] = 0;
   for(int i = 1; i<= m; i++){
        int mi = INT_MAX;
     for(int j = 1; j <= n; j++){
         if(i >= a[j]){
            mi = min(mi, dp[i-a[j]]);
         }
     }
        if(mi != INT_MAX)dp[i] = mi+1;

   }
   dp[m]!=INT_MAX?cout << dp[m]:cout << -1;
}
