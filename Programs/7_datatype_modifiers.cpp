#include <iostream>
using namespace std;
int main(){
    int marks=10;
    long long int ph_no=998877665544332211;
    cout << "Size of long int : " << sizeof(long int) <<endl; //4
    cout << marks <<endl;
    cout << ph_no <<endl;
    int transfer = ph_no;
    cout << transfer <<endl;
    
    //Sizes of datatype modifiers 
    cout << "Size of int : " << sizeof(int) <<endl;
    cout << "Size of long int : " << sizeof(long int) <<endl;
    cout << "Size of long long int : " << sizeof(long long int) <<endl;
    cout << "Size of short int : " << sizeof(short int) <<endl;
    cout << "Size of signed int : " << sizeof(signed int) <<endl;
    cout << "Size of unsigned int : " << sizeof(unsigned int) <<endl;
    cout << "Size of long signed int : " << sizeof( signed long int) <<endl;
    cout << "Size of long unsigned int : " << sizeof( unsigned long int) <<endl;
    cout << "Size of short signed int : " << sizeof( signed short int) <<endl; //order of signed /long doesnt matter
    cout << "Size of short unsigned int : " << sizeof( unsigned short int) <<endl;
    return 0;
}