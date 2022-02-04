#include <iostream>
using namespace std;

int main () {

    cout << boolalpha << ( 8 <= 7) << endl;
    cout << boolalpha << ( 5 == 4 ) << endl;
    cout << boolalpha << ( ! (5 < 8 && 6 >= 2) ) << endl;
    cout << boolalpha << ( 5 > 8 || 6 < 2 );

    return 0;
}