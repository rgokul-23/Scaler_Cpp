#include <iostream>
using namespace std;

void incMoney(int &myMoney){
    myMoney = 2 * myMoney;
    cout << "Function :" << myMoney <<endl; //myMoney restricted to incMoney function only cant print it in Main Function
}
//Pass by Reference using Reference variables
int main(){
    int money=23;
    incMoney(money);
    cout << "Main :" << money <<endl;;
    return 0;
}
/*Best way and easy syntax compared to pass by reference using pointer variables*/