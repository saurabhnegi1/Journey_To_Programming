#include <iostream>
#include <iomanip>
#define p 3.14159
using namespace std;

int main(){
    
    int r;
    cin >> r;
    cout << fixed;
    cout << setprecision(3) <<
        << "VOLUME = " << (4/3.0)*p*r*r*r << endl;

}
