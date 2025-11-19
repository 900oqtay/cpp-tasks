#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n, nn, say=0, c, n_new=0;
    cout<<"eded daxil edin"<<endl;
    cin>>n;
    nn=n;  //nn burada n-i muveqqeti evez edir
    while(nn!=0){ //reqemleri sayini tapmaq ucun prg
        nn/=10;
        say+=1;
    }
    while(n!=0){
        c=n%10;
        n_new=n_new+c*pow(10,say-1);
        n/=10;
        say-=1;
    }
    cout<<n_new<<endl;
}