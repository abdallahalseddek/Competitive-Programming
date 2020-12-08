#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int x ; //total distance in km
    float y; //the spent fuel 
    cin >> x >> y;
    cout.setf(ios::fixed,ios::floatfield); // to print 3 digits only 
    cout << setprecision(3) <<x/y << " km/l"<<endl ;
    return 0;

}