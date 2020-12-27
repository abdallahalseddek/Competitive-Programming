#include<bits/stdc++.h>

using namespace std;

int main(){

    double n[12][12], sum=0;
    char p;
    cin>>p;
    for(int i=0; i<12;i++){
        for (int j=0;j<12;j++) {cin >> n[i][j];if (j > i) { sum += n[i][j]; }}
    }

    if (p=='S'){cout<<sum<<endl;}
    else {cout<<sum/66.0<<endl;}

    return 0;
}


