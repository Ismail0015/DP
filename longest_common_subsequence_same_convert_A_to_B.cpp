#include<bits/stdc++.h>
using namespace std;
int main(){
   string A,B; cin >> A>>B;
    int n = A.size(), m = B.size();
    int dp[n+1][m+1];
    for(int i = 0; i <= n; i++)dp[i][0] = i;
    for(int j = 0; j <=m; j++)dp[0][j]=j;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            if(A[i-1]==B[j-1])dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = 1+min({dp[i-1][j-1],dp[i-1][j], dp[i][j-1]});
        }
    }
    cout << dp[n][m];
}
