#include <iostream>
using namespace std;

int main(){

    int start, end, time;
    cin >> start >> end;
    
    if(start==end)
        time=24;
    else if(start>end){
        time=(24-start)+end;
    }else 
        time=end-start;
    cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
}

