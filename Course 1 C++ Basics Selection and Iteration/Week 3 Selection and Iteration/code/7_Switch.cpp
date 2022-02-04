// Else If is used for ranges of values - Switch Case is for specific values
// switch case can only check for equality (e.g. num == 5), 
// so if you need to check for a range of values (e.g. num > 50 && num <= 60), 
// use else If instead.

#include <iostream>
using namespace std;
    int grade;
    int month;
    int year;
    void switchGrade (){
            
            cout << "Enter To Marks find your grade: " << endl; 
            cin >> grade;
            int letterGrade = grade / 100; // assigned grade to leterGrade
            switch (letterGrade) {
            case 10:
            case 9: cout << "Switch: A" << endl;
                break;
            case 8: cout << "Switch: B" << endl;
                break;
            case 7: cout << "Switch: C" << endl;
                break;
            case 6: cout << "Switch: D" << endl;
                break;
            default: cout << "Switch: F" << endl;
        }
    }

    void IfElseGrade () {
        if (grade < 60){
            cout << "if_else: F" << endl;
        }
        else if (grade < 70){
            cout << "if_else: D" << endl;
        }
        else if (grade < 80){
            cout << "if_else: C" << endl;
        }
        else if (grade < 90){
            cout << "if_else: B" << endl;
        }
        else if (grade <= 100){
            cout << "if_else: A" << endl;
        }
    }

    // Sometimes, the code for multiple cases is the same. 
    // Instead of repeating code, you can list multiple cases before the code. 
    // Here is another example: 

    void dayInMonth(){

        cout << "Enter Month to find day: " << endl;
        cin >> month;
        cout << "Enter year to find day: " << endl;
        cin >> year;
        int numDays = 0;
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                numDays = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                numDays = 30;
                break;
            case 2:
                if(((year % 4 == 0) && 
                    (year % 100)) ||
                    (year % 400 == 0))
                    numDays = 29;
                else
                    numDays = 28;
            default:
                cout << "Invalid month." << endl;
                break;

        }
        cout << "***********************************" << endl;
        cout << "*       Number of days =:" << numDays << "       *" << endl;
        cout << "***********************************" << endl;
    }

    void studentFeedback (){
        int studentAnswer = 2;
        string feedback1 = "This answer is wrong because....";
        string feedback2 = "This answer is correct! You know this because....";
        string feedback3 = "This answer is wrong. While the first part is correct....";
        string feedback;

        int correctAnswer = 2;
        int points = 0;

        switch (studentAnswer){
            case 1: feedback = feedback1;
                break;
            case 2: feedback = feedback2;
                break;
            case 3: feedback = feedback3;
                break;
            default : feedback ="Invalid answer choice";
        }
        cout << feedback << endl;
    }


    // Test
    void ifElseAnswer () {
        int studentAnswer = 2;
        string feedback1 = "This answer is wrong because ....";
        string feedback2 = "This answer is correct! You know this because....";
        string feedback3 = "This answer is wrong. While the first part is correct....";
        string feedback;
        
        int correctAnswer = 2;
        int points = 0;

        if (studentAnswer == 1)
        {
            /* code */
            cout << feedback1 << endl;
        }
        else if (studentAnswer == 2){
            cout << feedback2 << endl;
        }
        else
        {
            cout << feedback3 << endl;
        }
        
        if (studentAnswer == correctAnswer){

            points++;
        }
        std::cout << points << std::endl;
    }
int main () {

    switchGrade ();

    IfElseGrade();

    dayInMonth ();

    studentFeedback ();

    ifElseAnswer ();

    return 0;
}