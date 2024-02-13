#include "RMDXCAN.h"

RMDSERIES::RMDSERIES(int l_MotorId, int l_MotorType)
{

}

RMDSERIES::~RMDSERIES()
{

}

int RMDSERIES::initMotor(int l_MotorId)
{

}

int RMDSERIES::canWriteCommand(const int l_Command, _bool waitForReply = true, unsigned long canTimeOut = 500000, unsigned int* g_ErrorCode)
{
  const int l_Message[8]={0};
  l_Message[0] = l_Command;
  

}

void RMDSERIES::LogError(string functionName, int l_Result, unsigned int l_ErrorCode)
{

}