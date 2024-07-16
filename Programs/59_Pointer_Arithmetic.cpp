#include<iostream>
using namespace std;
int main(){
    int arr[10]={12,23,34,45,56,67,78,89,910,1011};
    cout << arr << endl;        // arr--> Read only pointer
    cout << &arr[0] << endl;
    cout << arr+1 <<endl;
    cout << &arr[1] <<endl;
    int *arrptr=arr;
    cout << arrptr <<endl;
    cout << "--------------------"<<endl;
    cout<<"i"<<": "<< "Address "<< ":"<<" Data" << endl;
    for (int i=0;i<(sizeof(arr)/sizeof(int));i++){
        cout<<i<<": "<< arrptr+i << ": "<<*(arrptr+i) << endl;    //Pointer + or - Int possible
    }
    /* Pointer+Pointer : Not Possible
       Pointer-Pointer : Possible*/
    int *arrptr1=&arr[1];
    int *arrptr9=&arr[9];
    cout << arrptr9-arrptr1 <<endl; //(arr+9)-(arr+1)
    return 0;
}