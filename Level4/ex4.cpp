#include <iostream>
using namespace std;

int main() {
    int n1,n;
    cout<<"n1= ";
    cin>>n1;
    n=n1;
    int bolen_say=1;
    for(int i= 2;i<=n;i++){
        int quvvet = 0;
        while(n%i==0){
            quvvet++;
            n /= i;
        }
        if(quvvet>0){
            bolen_say *= (quvvet + 1);
        }
    }
    
        bolen_say *= 2;
    
    cout<< bolen_say << endl;
    return 0;
}
