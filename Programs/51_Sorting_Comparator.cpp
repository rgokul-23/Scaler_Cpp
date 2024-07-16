#include <iostream>
#include <algorithm>
using namespace std;

void print(int * myArray, int n){
     for (int i=0;i<n;i++){
        cout << myArray[i]<<",";  
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"Array :"<<endl; 
    print(arr,n);                       // greater<int>() --> Functional Object tells sort function how to compare
    sort(arr,arr+n,greater<int>());     // sort syntax : [Start,End)   Array Range: arr to (arr+n-1) -->  S:arr E:arr+n 
    cout<<"Array Sorted :"<<endl;       // NlogN Time Complexity
    print(arr,n);
    return 0;
}