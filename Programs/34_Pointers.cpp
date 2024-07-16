#include <iostream>
using namespace std;
int main(){
    int x=23;
    cout <<&x <<endl;
    int *xptr=&x;  //pointer to x variable
    cout<< xptr <<endl;
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    cout<< &xptr <<endl;
    int **xxptr = &xptr; //pointer to a pointer
    cout<<xxptr<<endl;
    cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
    float y=23.01;
    cout <<&y <<endl;
    float *yptr;
    yptr= &y;
    cout<< yptr <<endl;
    return 0;
}