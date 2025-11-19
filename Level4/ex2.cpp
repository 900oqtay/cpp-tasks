#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n, i,k;
cout<<"n= "<<endl;
cin>>n;
    for(i=2;i<=n;i++){
        k=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                k+=1;
            }
        }
        if(k==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
