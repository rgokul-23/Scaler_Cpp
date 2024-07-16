#include<iostream>
using namespace std;
int main(){
    int a,b,out; char op;
    cin >> a >> op >> b;
    switch (op){
    case '+':
        out = a+b;
        break;
    case '-':
        out = a-b;
        break;      //If Break not present control would keep on runing below code eventhough case not match till it encouter break statement
    case '*':
        out = a*b;
        break;
    case '/':
        out = a/b;
        break;
    case '%':
        out = a%b;
        break;
    
    default:
        cout << "Enter valid operator"<<endl;
    }
    cout << out <<endl;
    return 0;

}