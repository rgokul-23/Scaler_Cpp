#include <iostream>
using namespace std;
int main(){
    int x=23;
    cout << "Address of variable x=23 : "<<&x <<endl;
    int arr[100];
    cout << "Addrss of the array : "<< arr << endl;
    cout << "Addrss of the array : "<< &arr << endl;
    float y=23.01;
    cout << "Address of variable y=23.01 : "<<&y <<endl;

    //special case character
    //separate cout fnc for character arrays
    char letter = 'A';
    cout << "Address of letter :"<<&letter<<endl;
    cout << "Address of letter :"<<(void *)&letter<<endl; //Typecasting
    return 0;
}