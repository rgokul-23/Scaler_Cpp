#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[100]="Visual Studio Code";
    cout<<arr<<endl;
    strcpy(arr,"Hello Everyone!");  //strcpy(destination, source)
    cout<<arr<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<strlen(arr)<<endl;        //count till it encouter '\0' in char array
    return 0;
}