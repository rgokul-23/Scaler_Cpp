#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=100){
        if(i%2==0){
            i++;
            continue;}
        cout<<i<<" is Odd Number"<<endl;
        i++;
    }
    return 0;
}