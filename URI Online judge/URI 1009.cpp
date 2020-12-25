#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string name;
    double a,b, r1;
    cin >> name >> a >> b ;
    r1 = b*.15;
    cout <<"TOTAL = R$ " << fixed << setprecision(2)<< a+r1 <<endl;
    return 0;

}