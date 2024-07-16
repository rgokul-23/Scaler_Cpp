#include<iostream>
using namespace std;
void isPrime(int N){
    int Prime=0;
    for(int i=2;i<=N-1;i++){
        if(N%i==0){
            cout<<N<<" is not a Prime Number";
            Prime=1;
            break;
        }
    }
    if(Prime==0)
    cout<<N<<" is a Prime Number";
}
int main(){
    int N;
    cin >> N;
    isPrime(N);
    return 0;
}
