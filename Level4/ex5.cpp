#include <iostream>
using namespace std;

int main() {
    int n,min=1,max=1,edor,s;
    cout<<"say: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int eded;
        cout<<"eded daxil edin";
        cin>>eded;
        s+=eded;
        if(eded>=max){
            max=eded;
        
        }
        if(eded<=min){
            min=eded;
        }
    }
    cout<<min<<"  "<<max<<endl;
    return 0;
}
