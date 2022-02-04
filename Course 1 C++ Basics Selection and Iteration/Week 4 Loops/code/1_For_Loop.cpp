#include <iostream>
using namespace std;

    void withoutLoop() {
        cout << "\t" << "Hello" << endl;
        cout << "\t" << "Hello" << endl;
        cout << "\t" << "Hello" << endl;
        cout << "\t" << "Hello" << endl;
        cout << "\t" << "Hello" << endl;
    }

    void withLoop() {
        for (int i = 0; i < 5; i++) {
            cout << "Hello" << endl;
        }
    }

    void loopHeader() {
        for (int i = 0; i < 5; i++) {
            cout << "\t" << "Loop #" << i <<endl;
        }
    }

    void quizTest() {
        for (int i = 0; i <= 9; i++) { //change i value asignment operator
            cout << i << " Loops are awesome!" << endl;
        }
    }

int main (){
    cout << "******* WithoutLoop *******"<< endl;
    withoutLoop();
    cout << endl;
    cout << "******** WithLoop *********" << endl;
    withLoop();
    cout << endl;
    cout << "********* Understanding Loop Header *********" << endl;
    loopHeader();
    cout << endl;
    cout << "******** testQuiz *********" << endl;
    quizTest();


}