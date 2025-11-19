#include <iostream>
using namespace std;
#include <string>
int main() {
    int i_son;
    string str;
    for(int i=1;i<=1000;i++){
        int ii;
        ii=i; //evezleyici
        while(ii!=0){
            i_son=ii%10;
            str+=to_string(i_son)
            ii/=10;
        }
        if(to_integer(str)==i){
            cout<<i<<endl;
        }


    }
    return 0;
}
