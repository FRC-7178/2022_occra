// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Motor1               motor         1               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// frontRight           digital_out   B               
// backRight            digital_out   C               
// backLeft             digital_out   D               
// Controller1          controller                    
// Controller2          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// frontRight           digital_out   B               
// backRight            digital_out   C               
// backLeft             digital_out   D               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// frontRight           digital_out   B               
// backRight            digital_out   C               
// backLeft             digital_out   D               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// frontRight           digital_out   B               
// backRight            digital_out   C               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// frontRight           digital_out   B               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// frontLeft            digital_out   A               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// leftFront            digital_out   A               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2, 3, 4      
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Motor393A            motor29       A               
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Motor393A            motor29       A               
// ---- END VEXCODE CONFIGURED DEVICES ----
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
// Motor393A            motor29       A               
// ---- END VEXCODE CONFIGURED DEVICES ----
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



void moveArm(int targetPos)
{
  
}
//Floor
void setPosition0()
{

}
void setPosition1()
{

}
void setPosition2()
{

}
void setPosition3()
{

}
void setPosition4()
{

}
//Climb
void setPosition5()
{

}


int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  while(true) 
  {
    int forward = Controller1.Axis3.position(percent);
    int sideways = Controller1.Axis4.position(vex::percent);
    int turn = Controller1.Axis1.position(vex::percent);

    frontRight.state(forward - sideways + turn, percent);
    frontLeft.state(forward + sideways - turn, percent);
    backRight.state(forward + sideways + turn, percent);
    backLeft.state(forward - sideways - turn, percent);
    //floor
    Controller2.ButtonL1.pressed(setPosition0);
    //Hang
    Controller2.ButtonL2.pressed(setPosition5);
    Controller2.ButtonB.pressed(setPosition1);
    Controller2.ButtonA.pressed(setPosition2);
    Controller2.ButtonX.pressed(setPosition3);
    Controller2.ButtonY.pressed(setPosition4);
    
  }
}
