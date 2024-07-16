#include<iostream>
#include<vector>
using namespace std;
void print(int a){
    cout<<a<<endl;
}
void print(vector <int> a){
    for(int x:a){
        cout<< x <<",";
    }
    cout<<endl;
}
void print(char *arr){
    cout<< arr <<endl;
}
int main(){
    int a=5;
    vector<int> arr ={1,2,3,4,5};
    char carr[]="abcde";
    print(a);
    print(arr);
    print(carr);
    return 0;
}