using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor leftWheel;
extern motor rightWheel;
extern motor flipperRight;
extern motor flipperLeft;
extern motor armLeft;
extern motor armRight;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );