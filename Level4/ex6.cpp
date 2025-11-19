#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n,n_son,s=0,r_sayi=0;
    cout<<"n= ";
    cin>>n;
    int nn;
    nn=n;
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
        cout<<"eded armstrongdur"<<endl;
    }
    else{
        cout<<"eded armstrong deyil"<<endl;
    }

    return 0;
}
