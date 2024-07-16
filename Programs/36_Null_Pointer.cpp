#include <iostream>
using namespace std;
int main(){
    int x=23;
    int *xptr=&x;  
    cout<<xptr <<"==="<<&x<<endl;
    xptr =0;
    int *yptr=0;
    int *zptr=NULL;
    cout<<xptr<<endl;
    cout<<yptr<<endl;
    cout<<zptr<<endl;
    return 0;
}