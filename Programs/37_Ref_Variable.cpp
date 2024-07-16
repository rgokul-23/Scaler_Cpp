#include <iostream>
using namespace std;
int main(){
    int x=23;
    int &y=x;
    cout << x <<endl;
    cout << y <<endl;
    cout <<&x <<endl; // 0x61ff08
    cout <<&y <<endl; // 0x61ff08
    x++;
    y++;
    cout << x <<endl;
    cout << y <<endl;
    y=99;
    cout << x <<endl;
    cout << y <<endl;
    return 0;
}