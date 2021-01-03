#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, small=0, index=0;
    int arr[n];
    cin >>n>>arr[n];
    for (int i=0;i<n;i++){
//        cin>>arr[i];
        if (arr[i]<small){
            small=arr[i];
            index=i;
        }
    }
    cout <<"Menor valor: "<<small<<endl;
    cout<<"Posicao: " <<index<<endl;
    return 0;
}

