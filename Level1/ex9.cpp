#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int vaxt;
   cout<<"vaxti daxil edin"<<endl;
   cin>>vaxt;
   float saat, deq, san;
   saat=vaxt/3600;
   deq=(vaxt%3600)/60;
   san=vaxt-saat*3600-deq*60;
   cout<<saat<<"saat  "<<deq<<"deqiqe  "<<san<<"saniye"<<endl;
}
