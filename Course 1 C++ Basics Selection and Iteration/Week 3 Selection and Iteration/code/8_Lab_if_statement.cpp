#include <iostream>
using namespace std;


void test1 (){
    int x = 5;
    if (x < 10){
        cout << "Less than 10" << endl;
    }
}

void test2(){
    int x = 20;

    if (x < 10){
        cout << "Less than 10" << endl;
    }
    cout << "And the program continues...." << endl;
}

    void test3 (){
        int age = 15;
        if (age < 20){
            if (age > 10){
                cout << "Teenager" << endl;
            }
        }
    }
                    // or we can write in another way
    
    test4(){
        int age = 15;
        if ((age < 20) && (age > 10)){
            cout << "Teenager" << endl;
        }
    }




int main (){

    test1();
    test2();
    test3();
    test4();
    return 0;
}