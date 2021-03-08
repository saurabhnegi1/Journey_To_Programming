#include <iostream>
#include <iomanip>
#define n 3.14159

using namespace std;

int main(){
    double r = 0.0;
    double a = 0.0;
    cin >> r;
    a=n*(r*r);
    cout << fixed;

    cout << setprecision(4) << "A=" << a << endl;
}

