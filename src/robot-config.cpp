#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
controller Controller2 = controller(partner);
// motor29 leftMotorA = motor29(Brain.ThreeWirePort.A,  false);
// motor leftMotorB = motor(PORT2, ratio18_1, false);
// motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB);
// motor rightMotorA = motor(PORT3, ratio18_1, true);
// motor rightMotorB = motor(PORT4, ratio18_1, true);
// motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB);
// drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 478.78, 21.59, 406.4, mm, 8);
pwm_out frontRight = pwm_out(Brain.ThreeWirePort.A);
pwm_out frontLeft = pwm_out(Brain.ThreeWirePort.B);
pwm_out backRight = pwm_out(Brain.ThreeWirePort.C);
pwm_out backLeft = pwm_out(Brain.ThreeWirePort.D);
//motor29 Motor393A = motor29(Brain.ThreeWirePort.A, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}