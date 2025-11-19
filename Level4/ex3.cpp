#include <iostream>
using namespace std;
int main() {
    int s;
    for(int i=100;i<=999;i++){
        s=i/100+(i/10)%10+i%10;
        if(s==10){
            cout<<i<<endl;
        }
    }
    return 0;
}
