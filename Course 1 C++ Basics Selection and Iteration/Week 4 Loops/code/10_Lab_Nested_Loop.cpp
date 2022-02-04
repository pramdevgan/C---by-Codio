#include <iostream>
using namespace std;

int main (){
    for (int x = 0; x < 3; x++){
        cout << "L" << endl;
            for(int y = 0; y < 3; y++){
            cout << "M" <<endl;
        }
    }

    //  Another Way

    cout << endl << "Another way" << endl;
    for (int x = 0; x < 12; x++){
        if ((x ==0) ||(x ==4) ||(x == 8)){
            cout << "L" << endl;
        }
        else{
            cout << "M" << endl;
        }
    }

    // Fromative Assesment

    for(int i = 0; i < 3; i++){
        cout << "XOXOXOXOX" << endl;
        for (int j = 0; j < 2; j++){
            cout << "OXO" << endl;
        }
    }
}