#include <iostream>
using namespace std;

void checkVowel(){
        string s;
        while (true) {
        cout << "Enter a lowercase vowel." << endl;
        cin >> s;
        if (s=="a" || s=="e" || s=="i" || s=="o" || s=="u") {
            cout << "You successfully entered a vowel." << endl;
            break;
        }
        else {
            cout << "You did not enter a vowel." << endl;
            break;
        }
    }
}

int main() {
  
  //add code below this line

    double result = 0;
    double input;
    
    while (true) {
        cout << "Enter a number to add sum. ";
        cout <<"Or enter a non-number to quit and calc sum." << endl;
        cin >> input;
        if (cin.good()){
            result += input;
        }
        if(cin.fail()){
            cout << "Sum = " << result << endl;
            break;
        }
    }

    checkVowel();
  //add code above this line
  
  return 0;
  
}
