#include <iostream>
using namespace std;

int main (){
    srand(time(NULL)); // start randomizer every time program runs
    while (true){
        cout << "This is infinite loop" << endl;
        int randNum = rand() % 100 + 1; // Generate random number between 1 and 100

        if (randNum > 60){
            cout << "The loop is ends" << endl;
            break;
        } //end if condition
    } //end while condition

    int count = 0;
    while (count <10 )
    {
        /* code */
        cout << count <<" C++" << endl;
        count = count + 1;
    }
    
    int total = 0;
    while (true)
    {
        /* code */
        total = total + 1;
        if (total > 99)
        {
            /* code */
            break;
        } 
    } 
    return 0;
}