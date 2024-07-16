#include <iostream>
using namespace std;

void print(int * myArray, int n){
     for (int i=0;i<n;i++){
        cout << myArray[i]<<" ";  
    }
}

int linearsearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return 0;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"Array stored : ";
    print(arr,n);
    cout<<endl;
    int key;
    cout<<"Enter the element you look for :";
    cin >> key;
    int res = linearsearch(arr,n,key);
    if (res==0)
        cout<<"Element found!";
    else
        cout<<"Element not found :(";
    return 0;
}