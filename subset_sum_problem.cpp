 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 int n = A.size();
      int dp[B+1];
      for(int i = 1; i <= B; i++)dp[i] = 0;
      dp[0]= 1;
      for(int i = 0; i < n; i++){
          for(int j = B; j>= A[i]; j--){
              if( dp[j-A[i]]){
                dp[j] = 1;
            }

          }
      }
      return dp[B];

 }
