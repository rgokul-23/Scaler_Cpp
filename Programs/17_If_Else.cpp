#include<iostream>
using namespace std;
int main(){
    int age;
    cin >>age;
    if(age>18){
        cout<<"You're elgible to vote" <<endl;
    }
    else if (age==18)
    {
        cout<<"You became elgible to vote. Apply for Voter ID" <<endl;
    }
    else{
        cout<<"You're Minor wait until you become 18 years old" <<endl;
    }    
    return 0;

}