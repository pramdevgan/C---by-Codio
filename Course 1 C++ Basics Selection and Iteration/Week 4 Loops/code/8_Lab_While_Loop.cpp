#include <iostream>
using namespace std;

int main (){

    int counter = 0;
    while (counter < 10)
    {
        /* code */
        cout << counter << endl;
        counter = counter + 1;
    }
    cout << "While loop finished" << endl;

    cout << "\t Infinite While Loop \n Which of the following code snippets will result in an infinite while loop?";
    int live = 10;
    while (live > 0){
        cout << "You are still in the game." << endl;
        live = live + 1;
    }
    cout << "Game Over." << endl;
    
    return 0;
}