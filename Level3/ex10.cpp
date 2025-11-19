#include <iostream>
using namespace std;
#include <cmath>
int main() {
    cout<<"N-i daxil edin"<<endl;
    int n, k1=1, k2=1, k3, i=1;
    cin>>n;
    cout<<k1<<",";
    cout<<k2<<",";
    while(i<=n){
        k3=k1 + k2;
        cout<<k3<<",";
        k1=k2;
        k2=k3;
        i+=1;
    }
    return 0;
   
}
