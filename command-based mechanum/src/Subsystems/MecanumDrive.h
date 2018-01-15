#ifndef MecanumDrive_H
#define MecanumDrive_H

#include <Commands/Subsystem.h>
//#include <CANJaguar.h>
#include <JoyStick.h>
#include "../Robot.h"

class MecanumDrive : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	CANJaguar *frontLeft{8};
	CANJaguar *frontRight{7};
	CANJaguar *rearLeft{6};
	CANJaguar *rearRight{4};

public:
	MecanumDrive();
	void InitDefaultCommand();
	void Enable();
	void ArcadeDrive(double RightX, double RightY, double LeftX, double LeftY);
};

#endif  // MecanumDrive_H
