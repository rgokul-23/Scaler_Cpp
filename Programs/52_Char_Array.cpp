#include<iostream>
using namespace std;
int main(){
    char arr[100];
    arr[0]='a';
    arr[1]='b';
    arr[2]='c';
    arr[3]='\0';
    cout << arr << endl; 
    cout << arr[0] << endl; 
    cout << arr[1] << endl; 
    cout << arr[2] << endl;
    cout << arr[3] << endl; 
    /*Special Funcitonality written in cout object for char Array such that it will print characters till it encounter
    null character '0' and it will not print/give address of arr[0]*/
    char *cptr =arr;
    cout << cptr <<endl; //still printing abc not address of arr[0]
    cout << (char *)cptr<<endl;
    cout << (void *)cptr<<endl; //Typecasting
    cout << "___________________________________________________________"<<endl;

    char array[4]={'x','y','z','\0'}; //Character Arrays must be Null terminated
    cout<<array<<endl;
    cout<<sizeof(array)<<endl;

    cout << "___________________________________________________________"<<endl;
    //Another way
    char b[]="Hello"; // "Hello" --> {'H','e','l','l','o',\0'}
    cout<<sizeof(b)<<endl; // n+1 size due to automatic append of '\0
    cout<<b<<endl;
    return 0;
}