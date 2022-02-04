#include <iostream>
using namespace std;

int main (){
    
    if (5 > 6){
    cout << "Print me true" << endl;
    }
    else {
        cout << "Print me if false" << endl;
    }

    if (10 % 2 == 0) { // mandatory curly braces
    cout << "10 is even" << endl;
    cout << "True" << endl;
    }
    else { // optional curly braces
    cout << "10 is odd" << endl;
    }

    return 0;
}