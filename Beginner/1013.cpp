#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    int res = (a>b)?a:b;
    res = (res>c)?res:c;

    cout << res << " eh o maior" << endl;

}
