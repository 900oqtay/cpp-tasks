#include <iostream>
using namespace std;
#include <cmath>
int main() {
    int n, i=0;
    cin>>n;
    while(n!=0){
        n=n/10;
        i+=1;
    }
   cout<<i<<endl;
}
