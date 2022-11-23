#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, m; cin >> n >> m;
   int a[n+1]; for(int i = 0; i < n; i++)cin >> a[i];
   int dp[m+1]; dp[0] = 1;
   for(int i = 1; i <= m; i++)dp[i] = 0;

   for(int i = 0; i < n; i++){
    for(int j = m; j>= a[i]; j--){
         if(dp[j] or (dp[j-a[i]]==0))continue;
         else dp[j] = a[i];
    }
   }
   if(dp[m]==0)cout << -1;
   else {
       while(m){
          cout << dp[m] << " ";
          m -= dp[m];
       }
   }
}

