#ifndef DriveWithJoystickCMD_H
#define DriveWithJoystickCMD_H

#include <Commands/Command.h>

class DriveWithJoystickCMD : public frc::Command {
public:
	DriveWithJoystickCMD();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoystickCMD_H
