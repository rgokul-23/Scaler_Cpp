#include<iostream>
using namespace std;

void playMusic();// Forward Declaration for avoiding compilation error
int main(){
    playMusic();
    return 0;
}
void playMusic(){
    cout<<"Playing Music :)";
}