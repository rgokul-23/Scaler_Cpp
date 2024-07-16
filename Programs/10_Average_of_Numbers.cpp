#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin >> a >> b >>c >> d >> e;
    float average= (float)(a+b+c+d+e)/5;
    cout << "Average of Numbers : " <<fixed << setprecision(4) <<average <<endl;
    return 0;
}