#include<iostream>
#include<cstring>
using namespace std;

void ReadLine(char *arr,int len,char delim){
    int cnt=0;
    char ch;
    while(true){
        ch=cin.get();
        arr[cnt]=ch;
        if(ch==delim || cnt==len-1)
            break;
        cnt++;
    }
    arr[cnt]='\0';
}
int length(char *arr){
    int i;
    for(i=0;arr[i]!='\0';i++){
    }
    return i;
}
int main(){
    char arr[100];
    ReadLine(arr,sizeof(arr),'*');
    cout<<arr<<endl;
    cout<<strlen(arr)<<endl;
    cout<<length(arr)<<endl;
    return 0;
}
