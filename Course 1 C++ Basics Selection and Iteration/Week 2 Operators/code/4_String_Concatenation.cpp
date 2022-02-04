#include <iostream>
using namespace std;

int main ()
{
    // add code below this line
        string a = "This is an";
        string b = " example string";
        string c = a + b;
        cout << c << endl;
    // add code above this line

        string d = "I understand";
        string e = d + " string concatenation!";
        cout << e << endl;
    return 0;
}

                            /*
                What happens if you:

    Concatenate two strings without an extra space (e.g. remove the space after an in string a = "This is an";)?
    Use the += operator instead of the + operator (e.g. a+=b instead of a + b)?
    Add 3 to a string (e.g. string c = a + b + 3;)?
    Add "3" to a string (e.g. string c = a + b + "3";)?                            
                            */