#include <iostream>

using namespace std;

int main(){
    int x, y, aux;
    cin >> x >> y;
    int sum=0;
    if(x==y) sum = 0;
    if(x>y){
        aux = x;
        x = y;
        y = aux;
    }
    for(int i=x+1; i<y; i++){
            if(i%2!=0)
                sum += i;
        }

    cout << sum << endl;

}
