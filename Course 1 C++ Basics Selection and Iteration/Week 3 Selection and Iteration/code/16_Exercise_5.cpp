#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "Enter vowel in lowercase: ";
    string x;
    cin >> x;

    if (x == "a"|| x =="e" || x =="i" ||x =="o" || x=="u"){
        cout << x << " is a vowel" << endl;
    }
    else{
        cout << x << " is not a vowel" << endl;
    }
    
}