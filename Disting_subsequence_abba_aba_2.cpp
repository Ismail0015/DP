#include<bits/stdc++.h>
using namespace std;
int main(){
  string A, B;
  cin >> A >> B;
   int n = A.length(), m = B.length();
    vector<vector<int>>dp(n+1, vector<int>(m+1,0));

    for(int i = 0 ; i <= n ; i++)
        dp[i][0]=1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(A[i-1] == B[j-1])
                dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][m];
}
