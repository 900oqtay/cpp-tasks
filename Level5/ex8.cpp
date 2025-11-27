#include <iostream>
using namespace std;
#include <cmath>
#include <string>
string f(int n) {
    int n_son,s=0,r_sayi=0;
    int nn;
    nn=n;                                                           //153
    while(nn!=0){ //nn-evezleyicidir
        r_sayi+=1;
        nn/=10;
    }
    int nnn;
    nnn=n;
    while(nnn!=0){ //nnn-evezleyicidir
        n_son=nnn%10;
        s+=pow(n_son,r_sayi);
        nnn/=10;
    }
    if(n==s){
        return "eded armstrongdur";
    }
    else{
        return "eded armstrong deyil";
    }

    return 0;
}
int main(){
    int eded;
    cout<<"eded: "<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}
