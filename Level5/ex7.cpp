#include <iostream>
using namespace std;

int f(int n1) {
    int n;
    n=n1;
    int bolen_say=1;
    for(int i= 2;i<=n;i++){
        int quvvet = 0;                           //100 18
        while(n%i==0){
            quvvet++;
            n /= i;
        }
        if(quvvet>0){
            bolen_say *= (quvvet + 1);
        }
    }
    
        bolen_say *= 2;
    return bolen_say;
}
int main(){
    int eded;
    cout<<"eded: "<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}