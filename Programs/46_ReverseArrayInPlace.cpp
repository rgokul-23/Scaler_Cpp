#include <iostream>
using namespace std;
void rev_in_place(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;e--;
    }
}

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
    cout<<"Array before reversing:"<<endl;
    print(arr,n);
    rev_in_place(arr,n);
    cout<<"Array after reversing:"<<endl;
    print(arr,n);
    return 0;
}