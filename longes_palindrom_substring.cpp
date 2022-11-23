#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ans ="";
    cin >> s;
    int n = s.size();
    int dp[n+1][n+1], l = 0, r = 0, mx = 0;
    for(int i = 0; i <= n; i++)
        dp[0][i] = dp[1][i] = 1;
    for(int i = 2; i <= n; i++)
    {
        for(int j = i; j <= n; j++)
        {
            if(s[j-1]==s[j-i] and dp[i-2][j-1]==1)
            {
                dp[i][j]=1,r=i,l=j;
            }
            else
                dp[i][j] = 0;
        }
    }
     for(int i = l-r+1; i <= l; i++)ans+=s[i-1];
    cout << ans;
}
