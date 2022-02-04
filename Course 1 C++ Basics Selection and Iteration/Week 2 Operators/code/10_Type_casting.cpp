                                /*
                            Type Casting
Type casting (or type conversion) is when you change the data type of a variable.                               
                                */

#include <iostream>
using namespace std;

int main ()
{
    int numerator = 40;
    int denominator = 25;
    int number = 5;

    cout << boolalpha << (bool) number << endl;
    cout << numerator / denominator << endl;
    cout << (double) numerator / denominator << endl;
    printf("%d\n", numerator/denominator);
    printf("%f\n", (double)denominator/denominator);
    printf("%f\n", (double)(numerator/denominator));

    /*
    Data Type Compatibility
    you can convert the string b to an integer to fix the problem by using stoi(). 
    stoi() acts as a function to convert a string into an integer. 
    The string or string variable goes into the () to be converted.
    */

   int a= 5 ;
   string b = "3";
   string c = "3.14";
   bool d = true ;
   cout << a + stoi(b) << endl;
   cout << a + stoi(c) << endl;
   cout << a + stod(c) << endl;
//    std::cout << a + to_string(d) << endl;
//    cout << b + to_string(d) << endl;

    // Change the e variable to a for submit the assigment
    double e = 0.01;
    cout << boolalpha<< (bool) (int) e << endl;
    return 0;

                                /*
    ________________________________________________________                    
    |   List of commonly used type-conversion functions    |   
    |------------------------------------------------------|
    | Function | Input Type | Output Type |   Example      |
    |------------------------------------------------------|
    | stoi()   | string     |     int     | stoi("10")     |
    |------------------------------------------------------|
    | stod()   | string     |    double   | stod("12.34")  |
    |------------------------------------------------------|
    |             | int,        |        | to_sting(10),   |
    | to_string() | double, or  | string |to_string(12.32),|
    |             | boolean     |        |to_string(false) |
    --------------------------------------------------------
    
                                */

                                    /*
                    What happens if you:
                    Assign number to 5?
                    Cast only denominator to a double?
                    Cast both numerator and denominator to a double?
                    Cast the result to a double (e.g. (double) (numerator / denominator)?
                    Change the code to…      
                    int numerator = 40;
                        int denominator = 25;
                        int number = 5;
                        cout << boolalpha << (bool) number << endl;
                        cout << numerator / denominator << endl;
                        cout << (double) numerator / denominator << endl;
                        printf("%d \n", numerator / denominator);
                        printf("%f \n", (double) numerator / denominator);
                        printf("%f \n", (double) (numerator / denominator));                              
                                    */
}