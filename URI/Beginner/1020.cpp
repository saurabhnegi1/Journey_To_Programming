#include <iostream>
using namespace std;

int main(){
    
    int x, y, m, d;
    cin >> x;

    y = x/365;
    x = x%365;
    m = x/30;
    x = x%30;
    d = x;
    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
}
