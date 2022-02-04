#include <iostream>
using namespace std;

int main (int argc, char** argv){
    string greeting = argv[1];
    string dayOfWeek = argv[2];
    string month = argv[3];
    int day = atoi(argv[4]);
    int currentWaitMinutes = atoi(argv[5]);

    // add code below this line
        cout << greeting;
        cout << " Today is ";
        cout << dayOfWeek;
        cout << ", ";
        cout << month;
        cout << " ";
        cout << day << endl;

        cout << "The current time is ";
        cout << currentWaitMinutes;
        cout << " minutes.";
    // add code above this line

                // OR
    cout << greeting << " Today is " << dayOfWeek << ", " << month << " " << day << "." << endl;
    cout << "The current wait time is " << currentWaitMinutes << " minutes." << endl;                

    return 0;
}