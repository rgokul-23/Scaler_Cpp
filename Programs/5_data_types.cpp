#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a=2301;
    bool b=false;
    float c=23.01;
    char d='G';
    cout<<a <<endl;
    cout<<b <<endl;
    cout<<c <<endl;
    cout<<d <<endl;

    float e=0.123456789; //0.123457 :(
    double f=0.123456789;//0.123457 :(
    cout<<e <<endl;
    cout<<f <<endl;
    
    //for precision we are including <iomanip>
    float g=0.123456789; //0.123456791 wrong as float cant maintain precise values
    double h=0.123456789;//0.0123456789 can maintain precise value
    cout<< fixed << setprecision(9) <<g <<endl;
    cout<< fixed << setprecision(9) <<h <<endl;
    return 0;
}