// Boolean operators are operators that return a boolean value (true or false).

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a  = 5;
    int b = 5;

    cout << boolalpha << (a ==b) <<endl;

                    /*
            What happens if you:
                1. Assign b to 1? -----> retrun false.
                2. Change a to bool a = true; and b to bool b = false;? -----> retrun false
                    */

                                // Not Equal To
// The != operator checks to see if two values are not equal.
    int c = 5;
    int d = 5;
    cout << boolalpha << (c != d) << endl;

                    /*
            What happens if you:
                1. Assign d to 1? -----> retrun true
                2. Change c to bool c = true; and assign d to 1? -----> retrun false.
                3. Change c to bool c = false;? -----> retrun true
                    */

}