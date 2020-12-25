#include <iostream>

using namespace std;
 /* Somthing is wrong !!*/
int main() {
    int m ,n, sum=0;
    cin >> m >> n;
      while(m !=0 || n!=0 || m>0 || n>0){
        if (n<m){
            for (int i=m; i<=n; i++){
                cout << m;
                m++;
                sum +=sum;
            }
            cout<<"Sum="<<sum<< endl;
    }
        else if (m<n){
            for (int i=n; i<=m; i++){
                cout << m;
                m++;
                sum +=sum;
            }
            cout<< "Sum="<<sum<< endl;
        }
    return 0;
}
}