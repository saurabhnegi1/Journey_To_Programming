#include <iostream>
using namespace std;

int main(){
    int e=0, o=0, p=0, n=0;
    int x;
    for(int i=1; i<=5; i++){
        cin >> x;
        if(x!=0){
           if(x>0)
               p++;
          else n++;
        }
        if(x%2==0)
             e++;
         else o++;
        }
    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;
}

