#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(int);
    cout<<"SubArrays:"<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            count+=1;
            cout<<"{";
            for(int k=i;k<=j;k++){
                if(k==j)
                    cout<< arr[k];
                else
                    cout<< arr[k]<<",";
            }
            cout<<"}"<<endl;
        }
    }
    cout<<"Number of SubArrays :"<<count<<endl;
    return 0;
}