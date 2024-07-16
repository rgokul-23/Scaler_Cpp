#include<iostream>
using namespace std;

void playMusic(int songID,int duration){
    cout<<"Playing Music No. :"<<songID<<" for "<<duration<<"minutes"<<endl;
}
int main(){
    playMusic(5,10);
    playMusic(10,30);
    playMusic(8,20);
    return 0;
}
