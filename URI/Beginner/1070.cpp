#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int c=0;
    while(c<6){
        if(x%2!=0){
            cout << x << endl;
            c++;
        }
         x++;
    }      
  
}
