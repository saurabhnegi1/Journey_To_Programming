#include <iostream>
#include <iomanip>
#define p 3.14159

using namespace std;

int main(){
    
    float a, b, c;
    double tri, cir, trap, square, rect;
    cin >> a >> b >> c;

    tri = (c*a)/2;
    cir = p*c*c;
    trap = ((a+b)/2)*c;
    square = b*b;
    rect = a*b;
    cout << fixed;
    cout << setprecision(3) << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rect << endl;
}

