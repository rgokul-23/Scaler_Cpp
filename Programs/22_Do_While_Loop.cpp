//Read Numbers and print it till you enter negative number
#include <iostream>
using namespace std;
int main(){
    int number;
    do{
        cout<< "Enter Number:";
        cin >> number;
        cout<< number <<endl;
    }while(number>=0);
    return 0;
}