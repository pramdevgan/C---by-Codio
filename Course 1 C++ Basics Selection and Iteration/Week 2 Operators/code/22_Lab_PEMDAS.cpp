#include <iostream>
using namespace std;

int main (){

    // Since modulo is based on division, modulo operations happen at the time of multiplication and division, going from left to right.
    cout << (5 * 8 / 3 + (18 - 8) % 2 - 25) << endl;

        //          Steps:
        // 5 * 8 / 3 + (18 - 8) % 2 - 25
        // 5 * 8 / 3 + 10 % 2 - 25
        // 40 / 3 + 10 % 2 - 25
        // 13 + 10 % 2 - 25
        // 13 + 0 - 25
        // 13 - 25
        // -12



// Order of operations starts with any expression(s) in parentheses. Next, the exponent(s) is calculated. Then multiplication, division, and modulo are calculated from left to right. Finally, addition and subtraction are calculated from left to right.
    return 0;
}