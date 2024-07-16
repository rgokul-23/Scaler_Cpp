#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    /*for(int i=n-1;i>=0;i--){
        cout<< arr[i] <<" ";
    }*/
    for(int i=0;i<n;i++){
        cout<< arr[n-1-i] <<" ";
    }
    cout <<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin >> n;
    int arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    reverse(arr,n);
    return 0;
}