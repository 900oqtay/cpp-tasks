#include <iostream> //1-den n-e qeder sade ededleri tap
using namespace std;
#include <cmath>
int f(int n) {
    int i,k;
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
}
int main(){
    int eded;
    cout<<"eded= "<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}
