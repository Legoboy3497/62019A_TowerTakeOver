#include "main.h"

void runLeftBase(double input)
{
    leftBase1.move(input);
    LeftBase2.move(input);
}

void runRightBase(double input)
{
    RightBase1.move(input);
    RightBase2.move(input);
}

void moveBase(double input, double speed)
{
    LeftBase1.move_relative(input, speed); 
    LeftBase2.move_relative(input, speed); 
    RightBase1.move_relative(input, speed); 
    RightBase2.move_relative(input, speed); 
}

void turnBase(double degree, double speed)
{
    LeftBase1.move_relative(input, speed); 
    LeftBase2.move_relative(input, speed); 
    RightBase1.move_relative(-input, speed); 
    RightBase2.move_relative(-input, speed); 
}



