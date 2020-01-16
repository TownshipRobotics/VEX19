#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor leftWheel = motor(PORT6, ratio18_1, false);
motor rightWheel = motor(PORT7, ratio18_1, false);
motor flipperRight = motor(PORT4, ratio18_1, false);
motor flipperLeft = motor(PORT5, ratio18_1, false);
motor armLeft = motor(PORT2, ratio18_1, false);
motor armRight = motor(PORT3, ratio18_1, false);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}