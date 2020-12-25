#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    
    double employee , bonus, percntage;
    cin >> employee;
    if (employee>0 && employee<=400.00)
    { 
        bonus=employee*.15;
        employee=employee+bonus;
        cout <<"Novo salario: " << fixed << setprecision(2)<< employee <<endl;
        cout <<"Reajuste ganho: " << fixed << setprecision(2)<< bonus <<endl;
        cout <<"Em percentual: 15 %"<<endl;
     }
    else if (employee>=400.01 && employee<=800.00)
    { 
        bonus=employee*.12;
        employee=employee+bonus;
        cout <<"Novo salario: " << fixed << setprecision(2)<< employee <<endl;
        cout <<"Reajuste ganho: " << fixed << setprecision(2)<< bonus <<endl;
        cout <<"Em percentual: 12 %"<<endl;
     }
      else if (employee>=800.01 && employee<=1200.00)
    { 
        bonus=employee*.1;
        employee=employee+bonus;
        cout <<"Novo salario: " << fixed << setprecision(2)<< employee <<endl;
        cout <<"Reajuste ganho: " << fixed << setprecision(2)<< bonus <<endl;
        cout <<"Em percentual: 10 %"<<endl;
     }
      else if (employee>1200.01 && employee<=2000.00)
    { 
        bonus=employee*.07;
        employee=employee+bonus;
        cout <<"Novo salario: " << fixed << setprecision(2)<< employee <<endl;
        cout <<"Reajuste ganho: " << fixed << setprecision(2)<< bonus <<endl;
        cout <<"Em percentual: 7 %"<<endl;
     }
      else if (employee>2000.00)
    { 
        bonus=employee*.04;
        employee=employee+bonus;
        cout <<"Novo salario: " << fixed << setprecision(2)<< employee <<endl;
        cout <<"Reajuste ganho: " << fixed << setprecision(2)<< bonus <<endl;
        cout <<"Em percentual: 4 %"<<endl;
     }
    
    return 0;

}