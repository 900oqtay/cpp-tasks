#include <iostream>
using namespace std;
#include <cmath>
int f(int n) {
    int i,s=0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            s+=pow(i,2);
        }

    }
    return s;
}
int main(){
    int eded;
    cout<<"eded daxil edin"<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}