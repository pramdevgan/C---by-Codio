#include <iostream>
using namespace std;

int main() {
  
  //add code below this line
                        // The && operator
                                        /*
    The && (and) operator allows for compound (more than one) boolean expressions. 
    All boolean expressions must be true in order for the whole thing to be true. 
    If at least one boolean expressions is false, then the whole thing is false.                                
                                        */
    bool a = true;
    bool b = true;
    bool c = false;

    cout << boolalpha << (a && b) << endl;
                            /*
                    What happens if you:
        Replace (a && b) in the code above with (a && c)? ----> retrun false; 
        Replace (a && b) in the code above with (b && c)? ----> retrun false
                            */
        // Multiple && Statements
        // You can chain several && expressions together. They are evaluated in a letf-to-right manner.
        cout << boolalpha << (a && b && a && b && a) <<endl;
                            /*
                  What happens if you:
          Replace (a && b && c) in the code above with (a && b && a && b && a)? ----> retrun true;
          Replace (a && b && c) in the code above with (a && b && a && b && c)? ----> retrun false         
                            */
                           
                            /*
    c is the only variable is that is false. 
    Thus, if c is involved in an && expression, the entire thing will evaluate to false. 
    Any combinations of as and/or bs will result in true.                            
                            */
  //add code above this line
  
  return 0;
 
}
