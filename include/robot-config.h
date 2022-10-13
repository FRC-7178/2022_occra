using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern controller Controller2;
extern drivetrain Drivetrain;
extern pwm_out frontRight;
extern pwm_out frontLeft;
extern pwm_out backRight;
extern pwm_out backLeft;
extern motor29 Motor393A;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );