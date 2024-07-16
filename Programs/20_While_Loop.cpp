//Read N Numbers and find their sum
#include <iostream>
using namespace std;
int main(){
    int i=1,N,sum=0,no=0;
    cin >> N;
    while(i<=N){
        cin >> no;
        sum+=no;
        i+=1;
    }
    cout<<"N :"<<N<<endl;
    cout<<"Sum :"<<sum<<endl;
    return 0;
}