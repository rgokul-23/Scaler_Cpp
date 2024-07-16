#include<iostream>
using namespace std;
bool isPrime(int N){
    for(int i=2;i<=N-1;i++){
            if(N%i==0){
                return false;
            }
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    cout << (isPrime(N) ? "Prime" : "Non-Prime");
    return 0;
}