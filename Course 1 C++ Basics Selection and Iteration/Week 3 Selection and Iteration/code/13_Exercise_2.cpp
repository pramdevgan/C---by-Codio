#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << "Enter a number: ";
    int x;
    cin >> x;
    if (x % 5 == 0){
        cout << to_string(x) + " is divisible by 5" << endl;
    }
    else{
        cout << to_string(x) + " is not divisible by 5" << endl;
    }
}