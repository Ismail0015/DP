#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
        vector<bool>v1(m+1, false), v2(m+1, false);
        v1[0] = true;
        for(int i=1;i<=m;i++)if(b[i-1]=='*')v1[i] = v1[i-2];

         for(int i = 1; i <= n; i++){
             for(int j = 1; j <= m; j++){
                 if(a[i-1]==b[j-1] or b[j-1]=='.'){
                      v2[j] = v1[j-1];
                 }
                 else if(b[j-1]=='*'){
                        v2[j]= v2[j-2];
                        if(b[j-2]=='.' or a[i-1] == b[j-2]){
                            v2[j] = v2[j]|v1[j];
                        }
                 }
                 else v2[j] = false;
             }v1 = v2;
         }
         cout << v1[m];
}
