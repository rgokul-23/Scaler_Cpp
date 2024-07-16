#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "sizeof(arr)/sizeof(int) :"<<sizeof(arr)/sizeof(int) <<endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i]<<",";
    }
    cout<<endl;
    cout << arr << endl; //Address of first element of the array
    return 0;
}