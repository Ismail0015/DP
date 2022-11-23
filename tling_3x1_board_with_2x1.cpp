#include<bits/stdc++.h>
using namespace std;
int main(){

    int A; cin >> A;
       int a[A+1], b[A+1], M = 1e9+7;
       a[0] = 1, a[1] = 0, b[0] = 0, b[1] = 1;
       if(A%2!=0)cout << 0;
        for(int i = 2; i <= A; i++){
            a[i] = (a[i-2]%M+2*b[i-1]%M)%M;
            b[i] = (a[i-1]%M+b[i-2]%M)%M;
        }
       cout << a[A]%M;
}

