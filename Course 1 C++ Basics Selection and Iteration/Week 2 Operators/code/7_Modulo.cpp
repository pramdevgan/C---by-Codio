#include <iostream>
using namespace std;

int main (){

    // Modulo is the mathematical operation that performs division but returns the remainder. 
    // The modulo operator is %.
    int modulo = 5 % 2;
    cout << modulo << endl;

    return 0;
}

                            /*
                    What happens if you:
            Assign modulo to 5 % -2? ----> retrun 1
            Assign modulo to 5 % 0? ----> retrun error Floting point exception (core dumped)
            Assign modulo to 5 % 2.0? ----> retrun error invalid operand of type 'int' and double to binary 'operator%'
                            */