#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
  bool thisIsFun = false;
  cout << boolalpha << thisIsFun << endl;

  //add code above this line
  
  return 0;
  
}

                        /*
    What happens if you:
        1. Change the variable to false?
        2. Remove the boolalpha << command?
        3. Change the variable to True?
        4. Change the variable to False?
        5. Change the variable to TRUE?
                        */
                        /*
You may have noticed that printing a boolean of true resulted in a 1 and a boolean of false resulted in a 0 
when you remove the boolalpha << command. In C++, the boolean value of true is associated with the integer 1 
while the boolean value of false is associated with the integer 0. 
Assigning the value of uppercase True or False to a boolean variable will cause an error message to appear.
                        */                       