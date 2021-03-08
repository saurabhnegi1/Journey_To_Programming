#include <iostream>
using namespace std;

int main(){
    double x, s=0;
    int c=0, i=1;
    while((i<=6)&& (cin>>x)){
        if(x>0){
            c++;
            s+=x;
        }
        i++;
        x=0;
    }
    cout << c << " valores positivos" << endl;
    cout << s/c << endl;
}
