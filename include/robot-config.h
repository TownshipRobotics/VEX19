using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor leftWheel;
extern motor rightWheel;
extern motor leftArm;
extern motor rightArm;
extern motor leftInTake;
extern motor rightInTake;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );