#include <iostream>
using namespace std;

void incMoney(int money){
    money = 2 * money;
    cout << "Function :" << money <<endl;
}

int main(){
    int money=23;
    incMoney(money);
     cout << "Main :" << money <<endl;
    return 0;
}
/*Function :46
Main :23*/