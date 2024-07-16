#include <iostream>
using namespace std;
int main(){
    int x=23;
    cout <<&x <<endl;
    int *xptr=&x;  //pointer to x variable
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout<< x <<endl; //value of x
    cout << &x <<endl; //address of x
    cout << xptr <<endl;//address of x
    cout<< *xptr<<endl; //value point to by address
    cout<< *(&x)<<endl;
    return 0;
}
// &bucker/variable ==> Address
// * Address = bucket/variable's value