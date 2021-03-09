#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    float a, b, c;

    while(n){
        cin >> a >> b >> c;
        cout << fixed << setprecision(1);   
        cout << (a*2+b*3+c*5)/(2.0+3.0+5.0) << endl;
         n--; 
    }

}
