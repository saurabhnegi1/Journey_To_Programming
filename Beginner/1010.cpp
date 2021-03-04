#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
   int c1, u1, c2, u2;
   double p1, p2;

   cin >> c1 >> u1 >> p1;
   cin >> c2 >> u2 >> p2;
   
   double cal=u1*p1+u2*p2;
   cout << fixed;
   cout << setprecision(2) << "VALOR A PAGAR: R$ " << cal << endl;

}
