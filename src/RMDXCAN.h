#ifndef RMDXCAN
#define RMDXCAN


/*********************************************************************************
 * function define
**********************************************************************************/




/*********************************************************************************
 * command define
**********************************************************************************/
namespace MyActuator::commands
{
  const int  READ_POS_KP = 0x30;
  const int  READ_POS_KI = 0x31;
  const int  READ_VEL_KP = 0x32;
  const int  READ_VEL_KI = 0x33;
  const int  READ_TORQUE_KP = 0x34;
  const int  READ_TORQUE_KI = 0x35;
  const int  WRITE_POS_KP_RAM = 0x36;
  const int  WRITE_POS_KI_RAM = 0x37;
  const int  WRITE_VEL_KP_RAM = 0x38;
  const int  WRITE_VEL_KI_RAM = 0x39;
  const int  WRITE_TORQUE_KP_RAM = 0x3A;
  const int  WRITE_TORQUE_KI_RAM = 0x3B;
  const int  WRITE_POS_KP_ROM = 0x3C;
  const int  WRITE_POS_KI_ROM = 0x3D;
  const int  WRITE_VEL_KP_ROM = 0x3E;
  const int  WRITE_VEL_KI_ROM = 0x3F;
  const int  WRITE_TORQUE_KP_ROM = 0x40;
  const int  WRITE_TORQUE_KI_ROM = 0x41;
  const int  READ_ACCEL = 0x42;
  const int  WRITE_ACCEL = 0x43;
  const int  READ_MULTITURN_POS = 0x60;
  const int  READ_ORIGINAL_POS = 0x61;
  const int  READ_MULTITURN_OFFSET = 0x62;
  const int  WRITE_ENCODER_ZERO = 0x63;
  const int  WRITE_ENCODER_CURRENT_POS_AS_ZERO = 0x64;
  const int  READ_MULTITURN_ANGLE = 0x92;

  const int  READ_MOTOR_STATUS1 = 0x9A;
  const int  READ_MOTOR_STATUS2 = 0x9C;
  const int  READ_MOTOR_STATUS3 = 0x9D;

  const int  SHUTDOWN = 0x80;
  const int  STOP = 0x81;
  const int  ENABLE = 0x88;

  const int  TORQUE_COMMAND = 0xA1;
  const int  SPEED_COMMAND = 0xA2;
  const int  ABS_POS_COMMAND = 0xA4;
  const int  REL_POS_COMMAND = 0xA8;


  const int  READ_OPERATING_MODE = 0x70;
  const int  READ_MOTOR_POWER = 0x71;
  const int  READ_AUXILIARY_VOLTAGE = 0x72;
  const int  WRITE_TORQUE_FEEDFORWARD = 0x73;

  const int  RESET = 0x76;
  const int  BRAKE_RELEASE = 0x77;
  const int  BRAKE_LOCK = 0x78;
  const int  CAN_ID_SETUP = 0x79;
  const int  READ_RUNTIME = 0xB1;
  const int  READ_SOFTWARE_VERSION = 0xB2;
  const int  COMM_INTERRUPT_TIMEOUT = 0xB3;
}

#endif // !RMDXCAN