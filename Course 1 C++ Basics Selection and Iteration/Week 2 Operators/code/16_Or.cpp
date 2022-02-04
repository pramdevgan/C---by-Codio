#include <iostream>
using namespace std;

int main (){
    // add code below this line

                                /*
                            The || Operator
The || (or) operator allows for compound (more than one) boolean expressions. 
If at least one boolean expression is true, then the whole thing is true. 
To be false, all boolean expressions must be false.
                                */

    bool a = true;
    bool b = true;
    bool c = false;
    bool d = false;

    cout << boolalpha << (a || b) <<endl;
                            /*
                What happens if you:
        Replace (a || b) in the code above with (a || c)?
        Replace (a || b) in the code above with (c || d)?                            
                            */
    cout << boolalpha << (a || c) << endl;
    cout << boolalpha << (c || d) << endl;

            // Multiple || Statements
    //  You can chain several || expressions together. They are evaluated in a left-to-right manner.

    cout << boolalpha << (a || b || c) << endl;
                            /*
                What happens if you:
        Replace (a || b || c) in the code above with (a || c || c || c || c)? ----> retrun true
        Replace (a || b || c) in the code above with (c && c && c && c && c)? ----> retrun false                       
                            */
        cout << boolalpha << (a || c || c || c || c) << endl;
        cout << boolalpha << (c || c || c || c || c) << endl;

    // add code above this line 

    return 0;
}