#include <iostream>
using namespace std;

int main(){

                                                    /*
    Conditionals are pieces of code that make a decision about what the program is going to do next. 
    The most common conditional is the if statement.                                                
                                                    */

    if (5 > 4)
    {
        /* code */
        cout << "I print 1st if ture" << endl;
        cout << "I print 2nd if ture" << endl;
    }
    cout << "I will always print" << endl;
    
                                                    /*
    If statements in C++ must contain the following items:
    The keyword if.
    A boolean expression in parentheses, ().
    Curly braces, {}, surrounding all lines of code that will run if the boolean expression is true.                                                
                                                    */
    if (7 != 4){
        cout << "Only print me if true" << endl;
    }
    cout << "Always print me" << endl;

    return 0;
}