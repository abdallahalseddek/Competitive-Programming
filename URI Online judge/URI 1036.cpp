#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double a,b,c, r1 ,r2, s;
    cin >> a >> b >>c;
    s = (b*b)-4*a*c;
    if (a==0 || s<0){cout <<"Impossivel calcular"<<endl;}
    else
    {
        r1 = (-b+sqrt(s))/(2*a);
        r2 = (-b-sqrt(s))/(2*a);
        cout <<"R1 = "<< fixed << setprecision(5) << r1 <<endl;
        cout <<"R2 = "<< fixed << setprecision(5) << r2 <<endl;
    }
    
    
    return 0;

}