#include <iostream>
using namespace std;

int main (){

    int num = 8;

    if (num % 2 == 0 || num > 10){
        cout << "Even and greater than 10" << endl;
    }
        // If you want your code to be more concise and easier to read. use nested if statements

    if (num % 2 == 0){
        cout << "Even" << endl;
    }
    if (num % 2 == 1){
        cout << "Odd" << endl;
    }
    return 0;
}