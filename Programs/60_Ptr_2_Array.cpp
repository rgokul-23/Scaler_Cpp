#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout <<"arr   : " << arr   << endl;     //arr --> Pointer to 0th element of the Array
    cout <<"arr+1 : " << arr+1 <<endl;
    cout <<"arr+2 : " << arr+2 <<endl;
    cout <<"arr+3 : " << arr+3 <<endl;
    cout <<"arr+4 : " << arr+4 <<endl;
    cout<<"________________________________________________________"<<endl;
    
    // Pointer pointing entire Array
    //int (*ptr)[5]; ✓ pointer to an integer array containing 5 elements
    //                  ptr+1 --> Take Jump of '5'step not '1'step
    //int *ptr[5];   X  An Array of pointers of size 5 -->{int*,int*,int*,int*,int*}
    
    int (*ptr)[5];
    ptr = &arr;
    cout <<"(Pointer to Array(ptr): "<< ptr<<")"<< " == " <<"(Address of 1st element(arr) : "<< arr <<")"<<endl;
    cout <<"(Pointing after 5 elements(ptr+1) : "<< ptr+1 <<")" << " != " <<"(Address of 2nd element(arr+1) : "<< arr+1 <<")"<<endl;
    cout<<"________________________________________________________"<<endl;

    //Dereferencing Pointer to an Array/Entire Array
    cout <<"arr : " << arr <<endl;
    cout <<"&arr : " << &arr <<endl;
    cout <<"*arr : " << *arr <<endl;
    cout <<"*(&arr) : " << *(&arr) <<endl;
    cout <<"*ptr :" << ptr <<endl; //Deref Pointer to Array : *ptr == *(&arr)--> arr
    cout <<"&ptr :" << &ptr <<endl; //Address of pointer to array variable
    cout <<"*(&ptr) :" << *(&ptr) <<endl;
    return 0;
}