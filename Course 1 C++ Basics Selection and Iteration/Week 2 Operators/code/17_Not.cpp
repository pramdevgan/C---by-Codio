#include <iostream>
using namespace std;

int main (){
    // add code below this line
                    /*
                The ! Operator
        The ! (not) operator produces the opposite result of the boolean expression that it modifies.
                    */
    cout << boolalpha << (! true) << endl;

                        /*
                What happens if you:
    Replace (! true) in the code above with (! true && false)?
    Replace (! true) in the code above with (! (true && false))?
    Replace (! true) in the code above with (! ! true)?
                        */
    cout << boolalpha << (! true && false) << endl;
    cout << boolalpha << (!(true && false)) << endl;
    cout << boolalpha << (!! true) << endl;

                                /*
                            Hints:
    The ! operator works similarly to how a - (negative) sign works in mathematics. 
    The - of a positive number is a negative number and the - of a negative number is a positive number.                           
                                */


                                /*
                    Order of boolean Operators:
    Much like how arithmetic operators are evaluated in a certain order, boolean operators also work according to their priority level. 
    Boolean operations are evaluated in the following order from highest to lowest priority:
                                */
// 1. Parentheses ()
// 2. Not !
// 3 And &&
// 4 Or ||

// Evaluate the two expressions below using either lowercase true or false.
// (5 !=4)
// (!(5==4))

cout << boolalpha << (5 != 4) << endl;
cout << boolalpha << (!(5 == 4)) << endl;

    // add code above this line
    return 0;
}