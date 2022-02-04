#include <iostream>
using namespace std;

int main (){

    //add code below this line
        int a = 0;
        a = a + 1; // or a =+ 1; both are same
        cout << a << endl;

    // The ++ and += Operators
        int b = 0;

        a = a + 1;
        b-=1;
        // b++;
        cout << b << endl;
    //add code above this line
    return 0;
}

                                /*
                            What happens if you:
            Replace b++ in the code above with b+=2? -----> retrun 2
            Replace b++ in the code above with b+=-1? -----> retrun -1
            Replace b++ in the code above with b-=1? -----> retrun -1
                                */