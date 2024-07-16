#include <iostream>
using namespace std;

void print(int * myArray, int n){
     for (int i=0;i<n;i++){
        cout << myArray[i]<<",";  
    }
}
/*  myArray-->pointer 
    myArray[i]--> *(myArray + i)
*/
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "sizeof(arr)/sizeof(int) :"<<sizeof(arr)/sizeof(int) <<endl;
    for (int i=0;i<n;i++){
        arr[i]=i+1;
    }
    print(arr,n);
    return 0;
}