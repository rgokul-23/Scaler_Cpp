#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b,result;
    cin >>a >>b;
    result=add(a,b);
    cout<< "result =" <<result <<endl;
    return 0;
}