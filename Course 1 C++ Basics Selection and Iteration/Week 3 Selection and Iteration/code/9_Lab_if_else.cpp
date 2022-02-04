#include <iostream>
using namespace std;

void test1 (){
    int x = 10;
    if (x > 50){
        cout << to_string(x) + " is greater than 50" << endl;
    }
    else
    {
        cout << to_string(x) + " is less than 50" << endl;
    }  
}

void quizTest (){
    cout << "Enter a Number : ";
    int x;
    cin >> x;

    if (x % 2 == 0){
        cout << to_string(x) + " is Even" << endl;
    }
    else{
        cout << to_string(x) +" is Odd" << endl;
    }
}

int main (){

    test1();
    quizTest();
    return 0;
}