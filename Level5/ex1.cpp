#include <iostream> //level2-ex5
using namespace std;
string qiymet(float bal) {
   if(bal<=50 && bal>=0){
    return "F";
   }
   if(bal<=60 && bal>=51){
    return "E";
   }
   if(bal<=70 && bal>=61){
    return "D";
   }
   if(bal<=80 && bal>=71){
    return "C";
   }
   if(bal<=90 && bal>=81){
    return "B";
   }
   if(bal<=100 && bal>=91){
    return "A";
   }
}
int main(){
   cout<<"bal= "<<endl;
   float ball;
   cin>>ball;
   cout<<qiymet(ball)<<endl;
}
