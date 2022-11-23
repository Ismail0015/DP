#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0, mx = 0, pos= 0;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)cin >> v[i];

    for(int i = 0; i < n-1; i++){
        mx = max(mx, v[i]+i);///2, 3, 1, 1, 4
        if(pos == i)
            pos = mx, c++;
    }
    cout << c;
}

