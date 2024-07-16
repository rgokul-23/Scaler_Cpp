#include<iostream>
using namespace std;
int main(){
    int i,N;
    cin >> N;
    for(i=2;i<=N-1;i++){
        if(N%i==0)
            break;
    }
    if(i==N)
        cout<<"Entered Number is Prime";
    else
        cout<<"Entered Number is not Prime";
    return 0;
}