#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c;
    float avg;
    cin >> a >> b >> c;

    avg = ((a*2)+(b*3)+(c*5))/(2+3+5);
    cout << fixed;    
    cout << setprecision(1) << "MEDIA = " << avg << endl;
}
