#include <iostream>
using namespace std;
int main(){
    int marks;
    bool boolean;
    float decimal;
    double long_decimal;
    char character;
    //sizeof(variables)
    cout <<"size of in int bytes : " << sizeof(marks) <<endl;
    cout <<"size of boolean in bytes : " << sizeof(boolean) <<endl;
    cout <<"size of float in bytes : " << sizeof(decimal) <<endl;
    cout <<"size of double in bytes : " << sizeof(long_decimal) <<endl;
    cout <<"size of char in bytes : " << sizeof(character) <<endl;
    //sizeof(datatypes)
    cout <<"size of in int bytes : " << sizeof(int) <<endl;
    cout <<"size of boolean in bytes : " << sizeof(bool) <<endl;
    cout <<"size of float in bytes : " << sizeof(float) <<endl;
    cout <<"size of double in bytes : " << sizeof(double) <<endl;
    cout <<"size of char in bytes : " << sizeof(char) <<endl;
    return 0;
}