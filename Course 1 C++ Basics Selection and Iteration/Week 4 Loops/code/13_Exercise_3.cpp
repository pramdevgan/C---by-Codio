#include<iostream>
using namespace std;

int main (int argc, char** argv[]){
    int a = stoi(argv[1]);
    int b = stoi(argv[2]);

    if (a > b) {
        int c = b;
        b = a;
        a = c;
    }

    int sum = 0;
    for (int iter = a; iter <= b; ++iter){
        sum += iter;
    }
    if(a == b){
        sum = a;
    }
    cout << sum << endl;


                        //OR
        /*int sum = 0;
        int iter = a;
        
        while (iter <= b) {
        sum += iter;
        iter++;
        }
        
        if (a == b) {
        sum = a;
        }
        
        cout << sum << endl;*/

    return 0;
}