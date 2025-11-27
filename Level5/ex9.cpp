#include <iostream>
using namespace std;
#include <string>
string f(int n) {
    int q;
    string str,str_q;
    while(n/2!=0){                                          //100-001001
        q=n%2;
        str_q=to_string(q);
        str=str+str_q;
        n/=2;
        
    }
    return str;
}
int main(){
     int eded;
    cout<<"eded: "<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;
}
