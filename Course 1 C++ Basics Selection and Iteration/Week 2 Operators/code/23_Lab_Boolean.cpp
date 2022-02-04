#include <iostream>
using namespace std;

int main (){

    cout << boolalpha << ((5 > 7) && (false || 1 < 9) || 4 != 5 && ! (2 >= 3)) << endl;

    // Evaluate all arithmetic operators according to PEMDAS
    // (5 > 7) && (false || 1 < 9) || 4 != 5 && ! (2 >= 3)
    // false && (false || 1 < 9) || 4 != 5 && ! (2 >= 3)
    // false && (false || true) || 4 != 5 && ! (2 >= 3)
    // false && (false || true) || true && ! (2 >= 3)
    // false && (false || true) || true && ! false

        // Evaluate all boolean operators according to this order - Parentheses (()), Not (!), And (&&), then Or (||)
        // false && true || true && ! false
        // false && true || true && true
        // false || true && true
        // false || true
        // true

    cout << boolalpha << (!(5!= 3) && (5 % 3 >= 2)) << endl;
    // The first set of parentheses, (5 != 3), evaluates to true. The second set of parentheses, (5 % 3 >= 2), also evaluates to true. ! true && true then becomes false && true which ultimately evaluates to false.
    return 0;
}