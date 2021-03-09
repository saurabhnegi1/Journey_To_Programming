#include <iostream>

using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    int sum, aux;
    while(n){
        cin >> x >> y;
        if(x>y){
            aux=x;
            x = y;
            y = aux;
        }
        sum=0;
        for(int i=x+1; i<y; i++)
            if(i%2!=0)
                sum += i;
      
        cout << sum << endl;
        n--;
    }
}


