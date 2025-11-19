#include <iostream>
using namespace std;
#include <string>
int main() {
    int n,q;
    string str,str_q;
    cout<<"n= ";
    cin>>n;
    while(n/2!=0){
        q=n%2;
        str_q=to_string(q);
        str=str+str_q;
        n/=2;
        
    }


    cout<<str<<endl;
    return 0;
}
