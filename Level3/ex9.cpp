#include <iostream>
using namespace std;
int main() {
    int n,i,k;
    k=0;
    cout<<"eded daxil edin:"<<endl;
    cin>>n;
    for (i=1;i<=n;i++){
        if(n%i==0){
            k+=1;
        }
    }
    if(k==2){
        cout<<"sade"<<endl;
    }
    else{
        cout<<"murekkeb"<<endl;
    }

}
