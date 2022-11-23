#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =8;
    vector<int>A(n);
    vector<int>in(n+1,1), de(n+1,1);

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(A[i] > A[j])in[i]= max(in[i],in[j]+1);
        }
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = n-1; j > i; j--){
            if(A[i] > A[j])de[i] = max(de[i], de[j]+1);
        }
    }
    int mx = 0;
    for(int i = 0; i < n; i++){
        mx = max(mx, in[i]+de[i]-1);
    }

}
