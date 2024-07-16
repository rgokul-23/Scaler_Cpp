#include <iostream>
using namespace std;
int main(){
    int arr[100]={23,23,23}; 
    /* Without initialization all bucket would contain garbage values
    With initialization to some buckets ,remaining buckets would contain 0 only*/
    for (int i=0;i<100;i++){
        cout << arr[i]<<",";
    }
    cout <<endl;
    cout <<"sizeof(arr) :"<< sizeof(arr) <<endl;
    cout << "sizeof(int) :"<< sizeof(int) <<endl;
    cout << "sizeof(arr)/sizeof(int) :"<<sizeof(arr)/sizeof(int) <<endl;
    return 0;

}