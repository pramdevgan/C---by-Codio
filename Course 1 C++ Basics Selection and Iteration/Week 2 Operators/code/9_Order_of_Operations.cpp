/*
                    order of operations
    C++ uses the PEMDAS method for determining order of operations.

    P  = Parentheses
    E  = Exponent - power & square root
    MD = Multiplication & Division - left to right
    AS = Addition & Subtraction - left to right

*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){

    // add code below this line
    cout << pow (2,2) << endl;
    cout << pow (25,(1/2)) << endl;
    cout << pow (25,(1.0/2.0)) << endl;
    cout << sqrt(25) << endl;

    // pow(25, (1 / 2)) vs. pow(25, (1.0 / 2.0))
    int a = 2;
    int b = 3;
    int c = 4;
    double result = 3 * a - 2 / (b + 5) + c;
    printf("%f \n",result);

    // Mental Math:
    cout << 5 + 7 - 10 * 4 /2 << endl;
    cout << 5 * 8 - 7 % 2 - 18 * -1 << endl;
    cout << 9 / 3 + (100 % 100) - 3 << endl;
    cout << 12 - 2 * pow(2,3) / (4 + 4) << endl;
    // add code above this line
    return 0 ;
}