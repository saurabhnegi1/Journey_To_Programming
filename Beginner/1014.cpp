#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int x;
    float y;
    
    cin >> x >> y;
    double res = x/y;

    cout << fixed << setprecision(3);
    cout << res << " km/l" << endl;
    
}
