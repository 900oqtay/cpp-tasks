//3
#include <iostream>  
#include <cmath>       
using namespace std;
int main(){
    int list[20];
    float s=0, h=1;
    for (int l=0; l<20; l++){ //massivin daxil edilmesi
        cout<<"list["<<l<<"]= ";
        cin>>list[l];
    }
    for (int i=0; i<10; i++){ //edor
        s+=list[i];
    }
    for (int j=10; j<20; j++){ //hendor
        h*=list[j];
    }
    s=s/10;
    h=pow(h,0.1);
    cout<<"ededi orta= "<<s<<"  "<<"hendesi orta= "<<h<<endl;

    return 0;
}