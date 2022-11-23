#include<bits/stdc++.h>
using namespace std;
int main(){
   int n, m;
   cin >> n >> m;
   int a[n+1];
   for(int i = 1; i <= n; i++)cin >> a[i];
   int dp[m+1];
   for(int i = 1; i <= m; i++)dp[i] = 0;
   dp[0] = 1;
   for(int i = 1; i<= n; i++){
     for(int j = 1; j <= m; j++){
         if(j >= a[i]){
             dp[j]+= dp[j-a[i]];
             dp[j]%= 1000000007;
         }
     }
        //if(mi != INT_MAX)dp[i] = mi+1;

   }
  cout << dp[m]%1000000007;
}

