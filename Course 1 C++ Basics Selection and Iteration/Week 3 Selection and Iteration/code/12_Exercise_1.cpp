#include <iostream>
#include <string>
using namespace std;

int main (){
    
    int x;
    x = 0;
    cout << "Enter Any Number Between 0 to 100 : ";
    cin >> x;
    if ((x >= 0 && x <= 25) || (x >=75 && x <= 100)){
        cout << to_string(x) + " is between 0 and 25 or 75 and 100";
    }
}