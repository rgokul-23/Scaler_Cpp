#include <iostream>
using namespace std;
int main(){
    int row,col;
    cin >> row >> col;
    int arr[row][col];
    //Input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //Output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}