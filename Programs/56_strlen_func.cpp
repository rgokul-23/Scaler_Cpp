#include<iostream>
#include<cstring>
using namespace std;

int length(char *arr){
    int i;
    for(i=0;arr[i]!='\0';i++){
    }
    return i;
}
int main(){
    char arr[]="Hello Everyone!";
    cout<<arr<<endl;
    cout<<strlen(arr)<<endl;
    cout<<length(arr)<<endl;
    return 0;
}
