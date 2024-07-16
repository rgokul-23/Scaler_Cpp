#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout <<"arr        : " << arr   << endl;     //arr --> Pointer to 0th element of the Array
    cout <<"&arr       : " << &arr <<endl;
    cout <<"&arr[0][0] : " << &arr[0][0] <<endl;
    cout <<"arr+1      : " << arr+1 <<endl;
    cout <<"&arr[0][1] : " << &arr[0][1] <<endl;
    cout <<"&arr[1][0] : " << &arr[1][0] <<endl;

    /*Conclusion:
      arr(array name) acts as Row pointer(pointer to entire array) for Multi Dimensional Array
      Each element itself is array
    */
   /* Memory View: [Row1][Row2][Row3] --> Continuous Linear Memory Allocation*/
    return 0;
}