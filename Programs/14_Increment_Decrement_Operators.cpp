#include<iostream>
using namespace std;
int main(){
    // Post : a++,a-- (assignment first followed by increment/decrement)
    // Pre  : ++a,--a (increment/decrement first followed by assignment )
    int a=10,b=20;
    int f,g;

    //Post
    f=a++;
    cout<<f<<endl; //10
    cout<<a<<endl; //11

    g=++b;
    cout<<g<<endl; //21
    cout<<b<<endl; //21
}