#include<iostream>
using namespace std;

void quizOne(){
        for (int n = 2; n<= 10; n+=2){
        cout << n << endl;
    }
}

// Formative Assessment 1
    void sumation100(){
        int sum = 0;
        for (int i = 1; i <= 100; i++){
            sum += i;
        }
        cout << sum << endl;
    }

int main (){
    quizOne();
    cout << endl << endl;
    sumation100();
}