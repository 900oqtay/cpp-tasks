#include <iostream>
using namespace std;
int main() {
   float bal;
   cin>>bal;
   if(bal<=50 && bal>=0){
    cout<<"F"<<endl;
   }
   if(bal<=60 && bal>=51){
    cout<<"E"<<endl;
   }
   if(bal<=70 && bal>=61){
    cout<<"D"<<endl;
   }
   if(bal<=80 && bal>=71){
    cout<<"C"<<endl;
   }
   if(bal<=90 && bal>=81){
    cout<<"B"<<endl;
   }
   if(bal<=100 && bal>=91){
    cout<<"A"<<endl;
   }
}
