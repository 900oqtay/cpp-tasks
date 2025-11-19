#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int i,n,s=0;
    cout<<"n-i daxil edin"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            s+=pow(i,2);
        
        }

    }
    cout<<s<<endl;
    return 0;
}