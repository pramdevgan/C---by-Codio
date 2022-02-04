#include <iostream>
using namespace std;

int main (){

                                        /*
                                Operators Challenge
        Write a boolean expression that incorporates ONE of the equality operators, 
        ONE of the less than operators, ONE of the greater than operators, 
        and TWO of the logical operators. 
        The result of your overall boolean expression MUST be false. 
        Make sure to use cout << boolalpha << in your code. 
        Otherwise, the system will print 0 or 1 instead of false or true.
                                        */
    cout << boolalpha << ((5==3) || (3 < 4) && (3 > 5)) << endl;
}