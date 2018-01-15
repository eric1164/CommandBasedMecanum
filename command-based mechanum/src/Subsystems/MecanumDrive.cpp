//
//
//

#include "MecanumDrive.h"
#include "../RobotMap.h"
//#include <CANJaguar.h>
#include <JoyStick.h>
#include "../Commands/DriveWithJoystickCMD.h"

MecanumDrive::MecanumDrive() : frc::Subsystem("MecanumDrive") {

}

void MecanumDrive::InitDefaultCommand() {
	SetDefaultCommand(new DriveWithJoystickCMD());
}

void MecanumDrive::Enable() {
	frontLeft->EnableControl();
	frontRight->EnableControl();
	rearLeft->EnableControl();
	rearRight->EnableControl();
}

void MecanumDrive::ArcadeDrive(double RightX, double RightY, double LeftX, double LeftY) {
	double forward = -LeftY;
	double right = LeftX;
	double clockwise = RightX;
	double front_left = forward + clockwise + right;
	double front_right = forward - clockwise - right;
	double rear_left = forward + clockwise - right;
	double rear_right = forward - clockwise + right;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
