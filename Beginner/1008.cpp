#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int e, h;
    float s;
    cin >> e >> h >> s;
    
    cout << fixed;
    cout << "NUMBER = " << e << endl;
    cout << setprecision(2) << "SALARY = U$ " << h*s << endl;
}
