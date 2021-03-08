#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    
    double d1 = (b*b)-(4*a*c);
    
    if(d1>0 && a != 0){
        double r1, r2;
        r1 = (-b+sqrt(d1))/(2*a);
        r2 = (-b -sqrt(d1))/(2*a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }else 
        cout << "Impossivel calcular" << endl;
}
