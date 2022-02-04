#include <iostream>
using namespace std;

int mainn (){
    // add code below this line

                        /*
        If C++ can determine the result of a boolean expression 
        before evaluating the entire thing, it will stop and return the value.
                        */

cout << boolalpha << (false 
                                &&
/*C++ never reaches this line*/ true) << endl;

cout << boolalpha << (true
                            ||
/*C++ never reaches this line*/ false) << endl;


                        /*
If the first boolean expression for the || operator is true, then the entire thing is true. The remaining boolean expression(s) is ignored.

If the first boolean expression for the && operator is false, then the entire thing is false. The remaining boolean expression(s) is ignored.                        
                        */
    // add code above this line
    return 0;
}