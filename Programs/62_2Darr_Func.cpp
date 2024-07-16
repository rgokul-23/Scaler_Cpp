#include<iostream>
using namespace std;

void accept2Darray_1(int (*ptr)[4]){     //Row Pointer Argument with row having 4 elements(No. of Columns)
    cout<< "Row Pointer Method 1 : "<<endl;
    cout <<"ptr        :"<<  ptr    << endl;
    cout <<"ptr+1      :"<<  ptr+1 << endl;
    int i=1,j=2;
    cout << "Accessing ith Row jith Column : *(*(ptr+i) + j) :"<<*(*(ptr+i) + j) <<endl;  //Ptr[i][j]
    /* ptr+i        --> ith Row Pointer
       *(ptr+i)     --> Dereferencing Row Pointer to point the address of 0th element of ith row
       *(ptr+i)+j   --> Points to the address of jth element of ith row
       *(*(ptr+i)+j)--> Dereferencing the address to the value of th element of ith row
    */
    cout << "Ptr[i][j] : "<<ptr[i][j]<<endl;
    cout <<endl;
}
void accept2Darray_2(int arr[][4]){         //Row Pointer Argument //Mentioning Column size is must
    cout<< "Row Pointer Method 2 : "<<endl;
    cout <<"arr        :"<<  arr    << endl;
    cout <<"arr+1      :"<<  arr+1 << endl;
    int i=1,j=2;
    cout << "Accessing ith Row jith Column : *(*(arr+i) + j) :"<<*(*(arr+i) + j) <<endl;
    cout << "arr[i][j] : "<<arr[i][j]<<endl;
    cout <<endl;
}
void print_2D_array(int arr[][4],int rows,int cols){
    cout<<"2D Array Print : "<<endl;
    cout<<"{";
    for(int i=0;i<rows;i++){
        cout<<"{";
        for(int j=0;j<cols;j++){
            cout<<arr[i][j];
            if(j!=cols-1)
                cout<<",";
        }
        cout<<"}";
        if(i!=rows-1)
                cout<<",";
    }
    cout<<"}";
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    accept2Darray_1(arr);
    accept2Darray_2(arr);
    print_2D_array(arr,3,4);
    return 0;
}
    /* 
    Memory View: [Row1][Row2][Row3] --> [1][2][3][4] | [5][6][7][8] | [9][10][11][12] Continuous Linear Memory Allocation
      No. of Rows doesnt matter as it is continuous but No. of Columns matter as it denotes start/end of each row in memory 
    */

    /*
      1D Array:

      int arr[5]={1,2,3,4,5};

      void fun(int arr[]){
      }

            OR                     Both takes pointer of arr not entire array as function

      void func(int *arr){
      } 
      */
    