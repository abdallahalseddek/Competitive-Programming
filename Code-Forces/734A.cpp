#include<bits/stdc++.h>

using namespace std;
int main() {
    long n,an=0,da=0;
    string s;
    cin>>n>>s;
    for (int i=0;i<n;i++){
        if (s[i]=='A'){an++;}
        else{da++;}
    }
    if (an>da) cout<<"Anton"<<endl;
    else if (da>an) cout <<"Danik" <<endl;
    else if (da==an) cout<<"Friendship";
    
    return 0;
}

