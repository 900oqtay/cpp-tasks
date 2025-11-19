#include <iostream>
using namespace std;
#include <cmath>
int main() {
   cout<<"ededi daxil edin"<<endl;
   int n, nnew=0, c;
   cin>>n;
   while(n!=0){
    c=n%10;
    nnew = nnew*10 + c;
    n=n/10;
   }
   cout<<nnew<<endl;
   return 0;
}
