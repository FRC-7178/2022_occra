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


double currentAng;
void moveArm(double futureAng){
    currentAng = armPot.angle(degrees);

    Controller1.Screen.print(armPot.angle(degrees));
    if (currentAng < futureAng - 4){
      armMotor.state(50,percent);
    }
    else if(currentAng > futureAng - 3 && currentAng < futureAng + 3){
      armMotor.state(0,percent);
    }
    else if(currentAng > futureAng + 4){
      armMotor.state(-50,percent);
    }
    else {
      armMotor.state(0,percent);
    }  
}

void setPosition1()
{
//  moveArm(49);
 armMotor.state(50, percent);
}
void setPosition2()
{
  moveArm(100);
}
void setPosition3()
{
  moveArm(159);
}
void setPosition4()
{
  moveArm(200);
}
//Climb
// void setPosition5()
// {
//   Controller1.Screen.clearScreen();
//   Controller1.Screen.print("position5: working");
//   Controller1.Screen.setCursor(1,1);
// }

void moveForwardBackward(int motorPower){
  frontRight.state(-motorPower, percent);
  frontLeft.state(motorPower, percent);
  backRight.state(-motorPower, percent);
  backLeft.state(motorPower, percent);
}

void spinRobotLeft(int motorPower){
  
  frontLeft.state(-motorPower, percent);
  backLeft.state(-motorPower, percent);
  //front right auto inverted
  frontRight.state(-motorPower, percent);
  //back right auto inverted
  backRight.state(-motorPower, percent);
}
void spinRobotRight(int motorPower){
  frontLeft.state(motorPower, percent);
  backLeft.state(motorPower, percent);
  //front right auto inverted
  frontRight.state(motorPower, percent);
  //back right auto inverted
  backRight.state(motorPower, percent);
}

void straifRobot(int motorPower){
  frontRight.state(-motorPower, percent);
  frontLeft.state(motorPower, percent);
  backRight.state(motorPower, percent);
  backLeft.state(-motorPower, percent);
}

int main() 
{
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true) 
  {
    int forward = Controller1.Axis3.position(percent);
    int sideways = Controller1.Axis4.position(percent);
    int straif = Controller1.Axis1.position(percent);

    // frontRight.state(forward - sideways + turn, percent);
    // frontLeft.state(forward + sideways - turn, percent);
    // backRight.state(forward + sideways + turn, percent);
    // backLeft.state(forward - sideways - turn, percent);

    // if (abs(forward) < 2)
    // {
    //     forward = 0;
    // }
    // if (abs(sideways) < 2)
    // {
    //     sideways = 0;
    // }
    // if (abs(straif) < 2)
    // {
    //     straif = 0;
    // }
    // moveForwardBackward(forward /4);
    // spinRobot(sideways / 4);
    // straifRobot(straif / 4);

    // if(Controller1.ButtonR1.pressing())
    // {
    //   moveArm(49);
    // }
    // else if(Controller1.ButtonX.pressing())
    // {
    //   moveArm(53);
    // }
    // else if(Controller1.ButtonY.pressing())
    // {
    //   moveArm(100);
    // }
    // else if(Controller1.ButtonA.pressing())
    // {
    //   moveArm(159);
    // }
    // else if(Controller1.ButtonB.pressing())
    // {
    //   moveArm(200);
    // }

    //move
    if(Controller1.ButtonUp.pressing())
    {
      moveForwardBackward(50);
    }
    else if(Controller1.ButtonDown.pressing())
    {
      moveForwardBackward(-50);
    }
    else if(Controller1.ButtonLeft.pressing())
    {
      spinRobotLeft(75);
    }
    else if(Controller1.ButtonRight.pressing())
    {
      spinRobotRight(75);
    }
    else {
      frontRight.state(0, percent);
      frontLeft.state(0, percent);
      backRight.state(0, percent);
      backLeft.state(0, percent);
    }

    //arm
    if (Controller2.ButtonX.pressing()){
      armMotor.state(50, percent);
    }
    else if (Controller2.ButtonB.pressing()){
      armMotor.state(-10, percent);
    }
    else{
      armMotor.state(0, percent);
    }

    // if(Controller1.ButtonR1.pressing())
    // {
    //   setPosition1();
    // }
    // else{
    //   armMotor.state(0, percent);
    // }

    // //Hang
    // Controller1.ButtonL2.pressed(setPosition5);
    // Controller1.ButtonB.pressed(setPosition1);
    // Controller1.ButtonA.pressed(setPosition2);
    // Controller1.ButtonX.pressed(setPosition3);
    // Controller1.ButtonY.pressed(setPosition4);
    
    
    //intake
    if(Controller2.ButtonL2.pressing())
    {
      intake.state(55, percent);
    }
    else if(Controller2.ButtonR2.pressing())
    {
      intake.state(-60, percent);
    }
    else 
    {
      intake.state(0, percent);
    }
  }

}
