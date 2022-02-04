#include <iostream>
#include "CTurtle.hpp"
#include "CImg.h"
using namespace cturtle;
using namespace std;

int main (int argc, char** argv){

    // create a screen for the turtle to move around in using the command TurtleScreen

    TurtleScreen screen(400, 300); //width 400 pixels and height 300 pixels
    Turtle tina(screen); //creates a turtle named tina inside the screen

                                    /*
                            Turtle Commands
In order to view the turtle object, it is not enough just to create it. 
You must give instructions to the turtle object in order for it to “move” around the screen. 
Here is a list of basic turtle commands that you can give to tina the turtle object:

Command	                             Parameter	                            Description
tina.forward(n)	    Where n represents the number of pixels	            Move the turtle forward
tina.backward(n)	Where n represents the number of pixels	            Move the turtle backward
tina.right(d)	    Where d represents the number of degrees	        Turn the turtle to the right
tina.left(d)	    Where d represents the number of degrees	        Turn the turtle to the left
                                    */
                    // Challenge 1
                    
            tina.pencolor({"blue"});
            tina.width(2);
            tina.shape("arrow");
            tina.speed(TS_SLOWEST);

            for(int i = 0; i < 4; i++){
            tina.forward(75);
            tina.right(90);
            tina.forward(25);
            tina.right(90);
            tina.forward(25);
            tina.right(90);
            tina.forward(25);
            } 

                // Challenge 2
                /*
            tina.pencolor({"red"});
            tina.width(2);
            tina.shape("square");
            tina.speed(TS_FAST);
        
        for (int i = 0; i < 360; i++){
            tina.forward(1);
            tina.right(1);
        }
                */

            // Challenge 3
                /*
        tina.pencolor({"green"});
        tina.width(2);
        tina.shape("triangle");
        tina.speed(TS_NORMAL);

        for(int i = 10; i<=200; i+=10){
            tina.forward(i);
            tina.right(90);
        }

                */

        //add code above this line
        
  screen.exitonclick();
    return 0;
}
