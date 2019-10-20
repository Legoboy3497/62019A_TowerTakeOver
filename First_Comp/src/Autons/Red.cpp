#include "main.h"
void red()
{
    runInTake(100);
    moveBase(100,75);
    delay(500);
    moveBase(-60,75);
    turnBase(160,60);
    moveBase(55,75);
    runInTake(0);
    runTray(50);
    delay(3000);
    runTray(0);
    runInTake(-100);
    moveBase(-70,75);
}