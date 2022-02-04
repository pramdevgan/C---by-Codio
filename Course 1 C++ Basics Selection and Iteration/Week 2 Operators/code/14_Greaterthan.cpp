#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
                            // Greater Than:
    // The > operator is used to check if one value is greater than another value.
    int a =  9;
    int b = 17;
    cout << boolalpha << (a > b) << endl;

                        /*
            What happens if you:
                Assign b to 1? -----> retrun true
                Assign b to 9? ----> retrun false
                Assign b to false? ----> retrun true (9 is both greater than the value of false, which is 0, and the value of true, which is 1.)
                Assign b to true?    ----> retrun true                    
                        */

                            // Greater Than or Equal To
    // The >= operator is used to check if one value is greater than or equal to another value.  
    int c = 9;
    int d = 9;
    cout << boolalpha << (c >= d) << endl;

                            /*

            What happens if you:
                Assign d to 1? -----> retrun true
                Assign d to 9? ----> retrun true
                Assign c to true and assign d to false? ----> retrun true (true is greater than false)

                    */
        //Select all of the expressions below that are true.
        cout << boolalpha << (19 >= 19) << endl;    
        cout << boolalpha << (18.9 >= 19) << endl;    
        cout << boolalpha << (-19 >= 19) << endl;    
        cout << boolalpha << (19 >= 9) << endl;    
    return 0;
}