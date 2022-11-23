#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; int k;
    int n = s.size();

        map<int,vector<int>>mp;
        for(int i = 0; i < n; i++){
            int l = i, r = i;
            while(l>=0 and r < n and s[l]==s[r]){
                mp[r+1].push_back(l);
                l--, r++;
            }
            l = i, r = i+1;
            while(l>=0 and r < n and s[l]==s[r]){
                mp[r+1].push_back(l);
                l--, r++;
            }
        }
        string ans = "";
        for(int i = 1; i <= n; i++){
            for(auto x:mp[i]){
                string t = "";
                for(int j = x; j< i; j++)t+=s[j];
                if(t.size() > ans.size())ans = t;
            }
        }
        cout << ans;
}



