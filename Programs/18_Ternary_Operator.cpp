#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int age; string msg;
    cin >>age;
    msg = ((age>18) ? "You are Elgible to vote" : (age==18) ? "You became eligible right now apply for Voter ID" : "Minor wait until you become 18");
    cout << msg <<endl;
    return 0;

}