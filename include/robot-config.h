using namespace vex;

extern brain Brain;

// VEXcode devices
extern  int currentPos;

extern controller Controller1;
extern controller Controller2;
extern pwm_out frontRight;
extern pwm_out frontLeft;
extern pwm_out backLeft;
extern pwm_out backRight;
extern pwm_out armMotor;
extern encoder armEncoder;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );