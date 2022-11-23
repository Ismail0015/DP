#include<bits/stdc++.h>
using namespace std;
int main(){

    int A; cin >> A;
       int dp[A];
       dp[0] = 0, dp[1] = 1;
       for(int i = 2; i <= A; i++){
         dp[i] = dp[i-1]+dp[i-2];
       }
       cout << dp[A];
}


