#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b;
    double av; 
    cin >> a >> b;

    av = ((a*3.5)+(b*7.5))/(3.5+7.5);
    cout << fixed;
    cout << setprecision(5) << "MEDIA = " << av << endl;
    
    return 0;
}
