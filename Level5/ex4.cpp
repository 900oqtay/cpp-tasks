#include <iostream>
using namespace std;
int f(int n){
    int s=0, nx;
 
    
    while(n!=0){
        nx=n%10;
        n/=10;
        s+=nx;
    }
    return s;
    
}
int main(){
    int eded;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}