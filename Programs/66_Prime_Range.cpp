#include<iostream>
using namespace std;
bool isPrime(int N){
    if(N==0 || N==1){return false;}
    for(int i=2;i<=N-1;i++){
            if(N%i==0){
                return false;
            }
    }
    return true;
}
void printPrimes(int A,int B){
    for(int i=A;i<=B;i++){
        if(isPrime(i))
            cout<<i<<" ";
    }

}
int main(){
    int A,B;
    cout<<"Starting Range :";
    cin>>A;
    cout<<"Ending Range :";
    cin>>B;
    cout<<"Prime Numbers :";
    printPrimes(A,B);
    return 0;
}