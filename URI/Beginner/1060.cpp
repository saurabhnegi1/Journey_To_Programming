#include <iostream>
using namespace std;

int main(){
    
    double x;
    int c=0, i=1;
    
    while((i<=6)&&(cin>>x)){
        if(x>0){
            c+=1;
        }
       ++i;
        x=0;
    } 
    cout << c << " valores positivos" << endl; 
}
