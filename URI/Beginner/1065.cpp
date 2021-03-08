#include <iostream>
using namespace std;

int main(){
    int i=1, x;
    int c=0;
    while(i<=5 && (cin>>x)){
        if(x%2==0)
            c++;
        i++;
    }
    cout << c << " valores pares" << endl;
}
