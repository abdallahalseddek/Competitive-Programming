#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m,n;
    cin >>m>>n;
    int result = .5*(n*m);
    cout << round(result) <<endl;
}