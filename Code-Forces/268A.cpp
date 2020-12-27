#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, count=0;
    cin >>n;
    int h [1000], g[1000];

    for (int i=0; i<n;i++){
        cin>>h[i]>>g[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            if (h[i]==g[j]){count++;}
        }
    }
    cout <<count <<endl;
    return 0;
}


