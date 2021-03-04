#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string name;
    double salary, sales;

    cin >> name >> salary >> sales;
    
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " 
         << salary+((sales*15)/100) << endl;
}
