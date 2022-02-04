#include <iostream>
using namespace std;


void test1 (){
    
    int size = 3;
    switch (size){
        case 1: cout << "Short" << endl;
            break;
        case 2: cout << "Tall" << endl;
            break;
        case 3: cout << "Granade" << endl;
            break;
        case 4: cout << "Venti" << endl;
            break;
        case 5: cout << "Trenta" << endl;
            break;
        default: cout << "Grande" << endl;
    }
}

void quizTest (){
    int size = 2;
    switch (size){
        case 1: cout << "Small" << endl;
        case 2: cout << "Medium" << endl;
        case 3: cout << "Large" << endl;
            break;
        default: cout << "X-Large" << endl;
    }
}

int main () {
    test1 ();
    quizTest ();
}