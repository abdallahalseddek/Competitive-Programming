#include <iostream>
using namespace std;

int main() {

    int n ;
    cin >> n;
    cout<< n/3600<<":"<<(n%3600)/60<<":"<<n%60<<endl;
    return 0;

}