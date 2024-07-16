#include<iostream>
using namespace std;

//default value parameters will come only after non-default value parameters
void playMusic(int songID,int duration=10){
    cout<<"Playing Music No. :"<<songID<<" for "<<duration<<"minutes"<<endl;
}
int main(){
    playMusic(1);
    playMusic(2,20);
    playMusic(3);
    return 0;
}
