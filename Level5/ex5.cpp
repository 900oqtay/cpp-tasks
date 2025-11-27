#include <iostream> //reqemlerin sayini tapir
using namespace std;
#include <cmath>
int f(int n) {
    int i=0;
    while(n!=0){
        n=n/10;
        i+=1;
    }
   return i;
}
int main(){
    int eded;
    cout<<"eded= "<<endl;
    cin>>eded;
    cout<<f(eded)<<endl;
    return 0;

}