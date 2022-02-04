#include <iostream>
using namespace std;

int main ()
{
    int a = 10;
    int b = 3;
    int c = a - b;
    cout << c << endl;


    // The -- and -= Operators
    int d = 10;
     d--;           //d -=1; this is same as d--.
    cout << d << endl;


    // Subtraction and Strings
     /* string e = "one two three";
        string f = "one";
        string g = e - f;
        cout << g << endl;
     */

    int h = 42;
    int i = 2;
    // decrement a by 1
    h--;

    // decement a by b
    h-=i;
    cout << h << endl;

}

                            /*
                    What happens if you:
            Assign b to -3? -------> retrun 13
            Assign c to a - -b? -------> retrun 13
            Assign b to 3.1? -----> retrun 7
            Change b to bool b = true;? -------> retrun 9 bcuz the value of true is equal to 1.                          
                            */