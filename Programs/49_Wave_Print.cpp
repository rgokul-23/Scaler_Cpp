#include <iostream>
using namespace std;
void waveprint(int arr[][100],int row,int col){           //Columns Count must be specified
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }

        }
    }
}
int main(){
    int row,col;
    cin >> row >> col;
    int arr[100][100];
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
    cout<<"Wave_Print:"<<endl;
    waveprint(arr,row,col);
    return 0;
}