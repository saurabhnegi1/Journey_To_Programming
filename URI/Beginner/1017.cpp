#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hour, km, total_distance;
    double liters;
    cin >> hour >> km;

    total_distance = hour*km;
    liters = total_distance/12.0;
    cout << fixed << setprecision(3);
    cout << liters << endl;

}

