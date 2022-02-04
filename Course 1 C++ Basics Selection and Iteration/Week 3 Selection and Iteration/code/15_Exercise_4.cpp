#include <iostream>
#include <string>
using namespace std;



int main (){
    cout << "Enter primary colors in lowercase: ";
    string x;
    cin >> x;
    
    if (x == "red" || x =="blue" || x =="blue"){
        cout << x << " is a primary color" << endl;
    }
    else{
        cout << x << " is not a primary color" << endl;
    }
}