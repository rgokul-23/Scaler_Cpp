//Read N Numbers and find the sum of numbers which are even
#include <iostream>
using namespace std;
int main(){
    int N,sum=0,no;
    cout<<"No. of Numbers :";
    cin >> N;
    for(int i=1;i<=N;i+=1){
        cin >> no;
        cout<<i<<" number:"<<no<<endl;
        if(no%2==0)
            sum+=no;
    }
    cout<<"N :"<<N<<endl;
    cout<<"Sum :"<<sum<<endl;
    return 0;
}