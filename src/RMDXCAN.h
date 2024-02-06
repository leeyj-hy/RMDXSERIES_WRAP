#ifndef RMDXCAN
#define RMDXCAN

#include <iostream>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

typedef const int _command;
typedef int _bool;

using namespace std;

/*********************************************************************************
 * function define
**********************************************************************************/
class RMDSERIES{
  public:
    RMDSERIES(int l_MotorId, int l_MotorType);
    ~RMDSERIES();

  private:
    int g_MotorId = 1;

    int initMotor(int l_MotorId);
    int canWriteCommand(_command l_Command, _bool waitForReply = true, unsigned long canTimeOut = 500000, unsigned int* g_ErrorCode);
    void LogError(string functionName, int l_Result, unsigned int l_ErrorCode);

  protected:
    
};



/*********************************************************************************
 * command define
**********************************************************************************/
namespace MyActuator::commands
{
  //MOTOR CONFIGURATION
  _command  READ_POS_KP = 0x30;
  _command  READ_POS_KI = 0x31;
  _command  READ_VEL_KP = 0x32;
  _command  READ_VEL_KI = 0x33;
  _command  READ_TORQUE_KP = 0x34;
  _command  READ_TORQUE_KI = 0x35;
  _command  WRITE_POS_KP_RAM = 0x36;
  _command  WRITE_POS_KI_RAM = 0x37;
  _command  WRITE_VEL_KP_RAM = 0x38;
  _command  WRITE_VEL_KI_RAM = 0x39;
  _command  WRITE_TORQUE_KP_RAM = 0x3A;
  _command  WRITE_TORQUE_KI_RAM = 0x3B;
  _command  WRITE_POS_KP_ROM = 0x3C;
  _command  WRITE_POS_KI_ROM = 0x3D;
  _command  WRITE_VEL_KP_ROM = 0x3E;
  _command  WRITE_VEL_KI_ROM = 0x3F;
  _command  WRITE_TORQUE_KP_ROM = 0x40;
  _command  WRITE_TORQUE_KI_ROM = 0x41;
  _command  READ_ACCEL = 0x42;
  _command  WRITE_ACCEL = 0x43;
  _command  READ_MULTITURN_POS = 0x60;
  _command  READ_ORIGINAL_POS = 0x61;
  _command  READ_MULTITURN_OFFSET = 0x62;
  _command  WRITE_ENCODER_ZERO = 0x63;
  _command  WRITE_ENCODER_CURRENT_POS_AS_ZERO = 0x64;
  _command  READ_MULTITURN_ANGLE = 0x92;

  //MOTOR STATUS
  _command  READ_MOTOR_STATUS1 = 0x9A;
  _command  READ_MOTOR_STATUS2 = 0x9C;
  _command  READ_MOTOR_STATUS3 = 0x9D;

  //MOTOR PWR
  _command  SHUTDOWN = 0x80;
  _command  STOP = 0x81;
  _command  ENABLE = 0x88;

  //CONTROL MODE
  _command  TORQUE_LOOP_COMMAND = 0xA1;
  _command  SPEED_LOOP_COMMAND = 0xA2;
  _command  POSITION_TRACK_COMMAND = 0XA3;
  _command  ABS_POS_COMMAND = 0xA4;
  _command  POSITION_TRACK_W_SPEEDLIM_COMMAND = 0XA5;
  _command  REL_POS_COMMAND = 0xA8;

  //
  _command  READ_OPERATING_MODE = 0x70;
  _command  READ_MOTOR_POWER = 0x71;
  _command  READ_AUXILIARY_VOLTAGE = 0x72;
  _command  WRITE_TORQUE_FEEDFORWARD = 0x73;

  //SYSTEM CONFIGURATION
  _command  RESET = 0x76;
  _command  BRAKE_RELEASE = 0x77;
  _command  BRAKE_LOCK = 0x78;
  _command  CAN_ID_SETUP = 0x79;
  _command  READ_RUNTIME = 0xB1;
  _command  READ_SOFTWARE_VERSION = 0xB2;
  _command  COMM_INTERRUPT_TIMEOUT = 0xB3;
}


#endif // !RMDXCAN