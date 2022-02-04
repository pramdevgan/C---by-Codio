#include <iostream>
using namespace std;

int main() {
  
    //add code below this line
                            // Less Than
    // The < operator is used to check if one value is less than another value.        
    int a = 5;
    int b = 7;
    cout << boolalpha << (a < b) << endl;
                            /*
            What happens if you:
                1. Assign b to 1? -----> retrun false
                2. Assign b to 5? -----> retrun false
                3. Assign b to false? -----> retrun false
                            */

                        // Less Than or Equal To
    // The <= operator is used to check if one value is less than or equal to another value.                        
    int c = 5;
    int d = 7;
    cout << boolalpha << (c <= d) << endl;
                    /*    
            What happens if you:
                Assign b to 1? -----> retrun false
                Assign b to 5? ----> retrun false
                Assign a to false and assign b to true? ----> retrun true (false is less than true because 0 is less than 1)
                    */
  //add code above this line
  
  return 0;
}
