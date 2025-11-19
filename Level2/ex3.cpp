#include <iostream>
using namespace std;
int main() {
   int a,b,c,m;
   m=0;
    cout<<"a daxil edin"<<endl;
   cin>>a;
    cout<<"b daxil edin"<<endl;
   cin>>b;
    cout<<"c daxil edin"<<endl;
   cin>>c;
   if(a>b && a>c){
    cout<<a<<endl;
   }
   else if(b>a && b>c){
    cout<<b<<endl;
   }
   else{
    cout<<c<<endl;
   }
}
