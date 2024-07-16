#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int N){
    for(int i=2;i<=sqrt(N);i++){      //Alternate Condition:i*i<=N
            if(N%i==0){
                return false;
            }
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    cout << (isPrime(N) ? "Prime" : "Non-Prime")<<endl;
    cout<<(int)sqrt(N)<<endl;
    return 0;
    
}