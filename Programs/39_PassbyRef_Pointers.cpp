#include <iostream>
using namespace std;

void incMoney(int *moneyPtr){
    *moneyPtr = 2 * (*moneyPtr);
    cout << "Function :" << *moneyPtr <<endl;
}
//Pass by Reference using pointer variable
int main(){
    int money=23;
    int *moneyPtr =&money;
    incMoney(&money);
     cout << "Main :" << money <<endl;
    return 0;
}