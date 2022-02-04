#include <iostream>
using namespace std;

// The switch case statement is a way to make a decision with multiple possible outcomes. 
// Instead of nesting or sequencing many

// Here are the rules for writing a switch case statement:
// Start with switch followed by the variable that is going to be tested in parentheses ().
// All of the cases are surrounded by a set of curly braces {}.
// Each case is followed by a numerical value and a colon :.
// After each :, write the code that should run if the variable is equal to that case’s value.
// After each section of code per case, include break;.
// As the very last case, use default: to specify what should happen if none of the above cases are true.

int main (){
    int dayOfWeek;
    cout << "Enter day Number: ";
    cin >> dayOfWeek ; 

    // int dayOfWeek = 3;

    switch (dayOfWeek){
        case 1: cout << "Sunday";
            break;
        case 2: cout << "Monday";
            break;
        case 3: cout << "Tuesday";
            break;
        case 4: cout << "Wednesday";
            break;
        case 5: cout << "Friday";
            break;
        case 6: cout << "Saturday";
            break;
        case 7: cout << "Sunday";
            break;
        default: cout << "Invalid";
    }
}