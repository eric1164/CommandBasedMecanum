#include "DriveWithJoystickCMD.h"
#include "../Robot.cpp"
#include "../Subsystems/MecanumDrive.h"

DriveWithJoystickCMD::DriveWithJoystickCMD()
	: frc::Command("DriveWithJoystickCMD"){
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::mecanumdrive);
}

// Called just before this Command runs the first time
void DriveWithJoystickCMD::Initialize() {
	Robot::mecanumdrive.Enable();
}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystickCMD::Execute() {
	auto& joystick = Robot::oi.GetJoystick();
	Robot::mecanumdrive.ArcadeDrive(joystick.GetRawAxis(0),joystick.GetRawAxis(1),
									joystick.GetRawAxis(2),joystick.GetRawAxis(3));
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystickCMD::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystickCMD::End() {
	Robot::mecanumdrive(0,0,0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystickCMD::Interrupted() {

}
