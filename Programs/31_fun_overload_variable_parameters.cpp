#include<iostream>
using namespace std;

int area(int l,int b){
    return l*b; //Rectangle
}

int area(int l){
    return l*l; //Square
}
int main(){
    cout<<area(5)<<endl;
    cout<<area(5,3)<<endl;
    return 0;
}