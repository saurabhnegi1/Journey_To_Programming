#include <iostream>

using namespace std;

int main(){
    int n;
    int max=0;
    int p=0;
    for(int i=0; i<100; i++){
        cin >> n;
        if(n>max){
            max=n;
            p=i;
        }
    }
    cout << max << endl << p+1 << endl;
}
