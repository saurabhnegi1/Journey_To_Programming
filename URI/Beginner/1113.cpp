#include <iostream>

using namespace std;

int main(){
    int x, y;
    bool i=true;
    while(i){
        cin >> x >> y;
        if(x==y){
            i = false;
        }else if(x>y){
            cout << "Decrescente" << endl;
        }else
            cout << "Crescente" << endl;
    }
}
