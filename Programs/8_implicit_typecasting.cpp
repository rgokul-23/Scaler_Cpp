#include <iostream>
using namespace std;
int main(){
    //////////////////// Implicit Typecasting//////////////////////////

    cout <<"5/3 =" << (5/3) <<endl;


    //Typecasting is change of resulting datatype
    //Happening implicitly complier automatically does

    //Priority Order : Float==Double >> int >> char >> boolean

    // Float & int
    cout <<"5/3.0 = "<< (5/3.0) <<endl;
    cout <<"5.0/3 = "<< (5.0/3) <<endl;
  
    
    // Char & Int
    char letter = 'A';
    cout << letter <<endl;
    cout << letter + 1 <<endl;
    letter = letter + 1;
    cout << letter <<endl;

    
    // Boolean & Int
    cout << (true + 5) <<endl;
    cout << (false + 5) <<endl;

    //char & Boolean
    char A_letter='A';
    cout << A_letter << endl;
    char B = (A_letter+true);
    cout << B <<endl;
 
    return 0;
}