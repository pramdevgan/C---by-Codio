#include <iostream>
using namespace std;

int main (){
    string string1 = "hip ";
    string string2 = string1 + string1;
    string string3 = "hoo";
    string string4 = "ray!";
    string string5 = string3 + string4;

    cout << string2;
    cout << string5 << endl;

// Only the + operator can be used with strings. It serves as the concatenation operator by merging two strings together.
    return 0;
}