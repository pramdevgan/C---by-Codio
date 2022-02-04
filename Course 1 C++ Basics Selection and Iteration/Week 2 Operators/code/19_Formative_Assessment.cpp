#include <iostream>
using namespace std;
int main () {
    // cout << boolalpha << ( 5 != 4 ) && ( 3 > 0 ) && ( ! (2 == 3) ) || #unknown condition# << endl;
    // Because all of the first three conditions evaluate as true, 
    // the && operator will cause their combination to evaluate as true too. 
    // When you reach the || operator, you then have true || #unknown condition#. 
    // C++ short circuits and evaluates the entire line as true without ever evaluating the #unknown condition#.


    cout << boolalpha << (7 >= 7) && (true || 99 < 1) || ! (3 > 5 && 7 < 10) && 2 != 4;
//     First, start by evaluating the expressions in the parentheses.

// (7 >= 7) returns true.
// (true || 99 < 1) returns true.
// ! (3 > 5 && 7 < 10) returns true.
// 2 != 4 returns true.

// So the boolean expression is now true && true || true && true, which returns true.
}