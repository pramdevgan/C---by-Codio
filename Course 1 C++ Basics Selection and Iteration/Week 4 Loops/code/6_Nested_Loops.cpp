#include <iostream>
using namespace std;
                                    /*
        A nested loop is a loop that exists inside of another loop. 
        An advantage of using nested loops is that the loops can work 
        together to create unique and complex outputs. 
                                    */
int main (){

    for (int row = 0; row < 10; ++row){ // Outer Loop
        for (int col = 0; col < 10; ++col){ // Inner Loop
            cout << "#";
        }
        cout << "" << endl; //add new line
    }


    // Nested Loop Coding Challenge 1
    int row = 0;
    while (row < 7){
        int col = 0;
        while (col < 11){
            cout << "#";
            col++;
        }
        cout << ""<< endl; //add new line
        row++;
    }


    // Nested Loop Coding Challenge 2
    for (int row = 0; row < 5; row++){ // Outer Loop
        if (row % 2 == 0)
        {
            /* code */
            int col = 0;
            while (col < 10)
            {
                cout << "<";
                col++;
            }
            cout << "" << endl; //add new line
        }
        else
        {
            /* code */
            int col = 0;
            while (col < 10){
                cout << ">";
                col++;
            }
            cout << "" << endl; //add new line
        }
    }


    // Nested Loop Coding Challenge 3

    for (int row = 1; row <=5; row++){
        for (int col = 1; col <= row; col++){
            cout << row;
        }
        cout << "" << endl; //add new line
    }

    cout << endl <<"Assesment 1 Nested Loop" << endl; 
        for (int line = 1; line <=12; line++){
        for (int num = 1; num <= line; num++){
            cout << num << " ";
        }
        cout << " " << endl; //add new line
    }

    cout << endl <<"Assesment 2 Nested Loop" << endl; 
    for(int i = 0; i < 4; i++) {
            cout << ("&&") << endl;
        for(int j = 0; j < 3 ; j++) {
                cout << ("*") << endl;
            }
        }
    return 0;
}