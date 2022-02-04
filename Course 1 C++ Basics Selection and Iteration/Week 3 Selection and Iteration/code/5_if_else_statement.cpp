#include <iostream>
using namespace std;

int main (){

    bool my_bool = ! true  && ! false;
    if (my_bool){
        cout << "The value of my_bool is true" << endl;
    }
    else{
        cout << "The value of my_bool is false" << endl;
    }


    int grade;
    cout << "Enetr your Marks:";
    cin >> grade;
    if (grade < 60){
        cout << "F" << endl;
    }
    else if (grade < 70){
        cout << "D" << endl;
    }
    else if (grade < 80){
        cout << "C" << endl;
    }
    else if (grade < 90){
        cout << "B" << endl;
    }
    else if (grade <= 100){
        cout << "A" << endl;
    }

    int num;
    cout << "Enter the Number to find Even or Odd:";
    cin >> num;
    if (num % 2 == 0){
        cout << "Even" << endl;
    }
    else if (num % 2 == 1){
        cout << "Odd" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }

    bool windy = true;
    bool rainy = false;
    bool cold = false;
    if (rainy) {
        if (windy) {
            cout << "Wear a rain jacket." << endl;
        }
        else {
            cout << "Bring an umbrella!" << endl;
        }
        }
    else {
        if (cold) {
            cout << "You might need a coat." << endl;
        }
        else {
            cout << "Enjoy your day!" << endl;
        }
    }
    return 0;
}