/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\FRC                                              */
/*    Created:      Sat Sep 17 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Controller2          controller                    
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontRight           motor         5               
// frontLeft            motor         6               
// backRight            motor         7               
// backLeft             motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true) 
  {
    int forward = Controller1.Axis3.position(vex::percent);
    int sideways = Controller1.Axis4.position(vex::percent);
    int turn = Controller1.Axis1.position(vex::percent);

    frontRight.spin(vex::forward, forward - sideways + turn, vex::percent);
    frontLeft.spin(vex::forward,  forward + sideways - turn, vex::percent);
    backRight.spin(vex::forward,  forward + sideways + turn, vex::percent);
    backLeft.spin(vex::forward,   forward - sideways - turn, vex::percent);
  }
}
