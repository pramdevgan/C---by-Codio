#include <iostream>
using namespace std;

int main (){

                                            /*
        if statements test to see if a certain condition is true. 
        If yes, then specific commands are run. 
        The simple if statement does not do anything if the boolean expression is false.                                   
                                            */

    if (7 !=10){
        cout << "The above statement is true" << endl;
        cout << "The above statement is still true" << endl;
    }
    cout << "This is not releted to the if statement" << endl;

    if (7 == 10){
        cout << "The above statement is true" << endl;
        cout << "The above statement is still true" << endl;
    }
    cout << "This is not releted to the if statement" << endl;

        if (true){
        cout << "The above statement is true" << endl;
        cout << "The above statement is still true" << endl;
    }
    cout << "This is not releted to the if statement" << endl;

        if (false){
        cout << "The above statement is true" << endl;
        cout << "The above statement is still true" << endl;
    }
    cout << "This is not releted to the if statement" << endl;

                                            /*
                                    What happens if you:
                        Change != in the code above to ==?
                        Change 7 != 10 in the code above to true?
                        Change 7 != 10 in the code above to false?
                        Remove the curly braces {} with the condition set to if (false)?
                                            */


                                           /*
                                Testing Multiple Cases

                You will find yourself needing to test the same variable multiple times. 
                Be sure that you set up your conditionals to test all possible values of the variable.
                                           */
    int grade = 70;

    if (grade >= 70){
        cout << "Congratulations, you passed the class" << endl;
    }

    if (grade < 70){
        cout << "Condolences, you did not pass the class" << endl;
    }

    float probability = 1;
    if (probability < .1) {
    cout << "That's improbable!" << endl;
    }
    if (probability < .5 && probability >= .1) {
    cout << "That's unlikely!" << endl; 
    }
    if (probability >= .5) {
    cout << "That's a good chance!" << endl; 
    }


    int age = 18;
    if (age < 18) {
    cout << "You are too young to vote." << endl; 
    }                                                   //Answer
    if (age > 18) {
    cout << "You can vote!" << endl;
    }

    int chartPosition = 10;

    if (chartPosition <= 10) {
    cout << "You made it into the top 10 songs!" << endl; 
    }
    if (chartPosition > 10) {
    cout << "Better luck next week." << endl; 
    }
    return 0;
}