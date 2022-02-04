#include <iostream>
using namespace std;

int main (){
      for (int x = 0; x < 11; x++) {
        if (x % 2 == 0) {
        cout << "Even" << endl;
        }
            else {
            cout << "Odd" << endl;
            }
        }


    for (int x = 0; x < 5; x++) {
        if (x % 2 == 0){
            cout <<"Even Odd Even" << endl;
        }
        else{
            cout << "Odd Even Odd" << endl;
        }
    }
    return 0;
}