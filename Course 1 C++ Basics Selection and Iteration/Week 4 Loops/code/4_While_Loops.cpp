#include <iostream>
using namespace std;

void using_for_Loop(){
    for (int i = 0; i < 5; i++){
        cout << "Loop#: " << i << endl;
    }
}

void using_While_Loop (){
    int i = 0;
    while (i < 5){
        cout << "Loop#: " << i << endl;
        i++;
    }
}

void hello_5_Time(){
    int count = 0;
    while (count < 10){
        cout << "Hello" << endl;
        count++;
    }
}

void infinite_loop(){
    int count = 5;
    while (count > 0)
    {
        /* code */
        cout << "Hello" << endl;
    }
    
}

int main (){

    cout << "**** Using For Loop ****" << endl;
    using_for_Loop();

    cout << endl;
    cout << "**** Using For Loop ****" << endl;
    using_While_Loop();

    cout << endl;
    cout << "**** Hello 5 Times ****" << endl;
    hello_5_Time();

    // Uncomment below code to check the infinite loop
    /*cout << endl;
    cout << "**** Infinite Loop ****" << endl;
    infinite_loop(); */
}