#include <iostream>
using namespace std;

int main(){
    
    int n, q;
    int arr[]={100,50,20,10,5,2,1};
    cin >> n;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;
    for(int i=0; i<size; i++){
        if(n){
            q = n/arr[i];
            cout << q << " nota(s) de R$ " << arr[i] << ",00"<< endl;
            n = n%arr[i];
        }
    }

}
