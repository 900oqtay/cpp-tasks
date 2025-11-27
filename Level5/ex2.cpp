#include <iostream> //ededin tersini tapan prg
using namespace std;
#include <cmath>
int f(int n) {
    int nn, say=0, c, n_new=0;
    cout<<"eded daxil edin"<<endl;
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
    return n_new;
}
int main(){
    int eded;
    cout<<"eded="<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
}