#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1)
        return 1;
    else 
        return (n*factorial(n-1));
}

int main(){
    int n,fact;
    cin >>n;
    fact=factorial(n);
    cout<< "Factorial of "<<n <<"=" <<fact <<endl;
    return 0;
}