#include <iostream>
using namespace std;
int main(){
    int n, s=0, nx;
    cout<<"eded daxil edin"<<endl;
    cin>>n;
    while(n!=0){
        nx=n%10;
        n/=10;
        s+=nx;
    }
    cout<<"cem= "<<s<<endl;
    return 0;
    
}