#include<iostream>
#include<cstring>
using namespace std;
int main(){
    /*char arr[100];
    cin >> arr;
    cout << arr <<endl;         //Hello not Hello World //cin stops reading after encountering ' '(space)
    cout << strlen(arr) <<endl;*/
    //////////////////////////
    char array[100];
    cin.getline(array,100,'#');     //cin.getline(destination,capacity,delimiter(till where to read))
    cout<<array<<endl;               //delimiter is replaced by '\0' null character
    cout << strlen(array) <<endl;
    return 0;
}