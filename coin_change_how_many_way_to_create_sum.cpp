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
   for(int i = 1; i<= m; i++){
     for(int j = 1; j <= n; j++){
         if(i >= a[j]){
             dp[i]+= dp[i-a[j]];
             dp[i]%= 1000000007;
         }
     }
   }
  cout << dp[m]%1000000007;
}

