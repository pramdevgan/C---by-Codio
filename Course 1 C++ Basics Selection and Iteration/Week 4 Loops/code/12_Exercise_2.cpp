#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    string x = argv[1];

    for (int i = 0; i < 10; ++i) {
        cout << x << endl;
    }
    return 0;
}