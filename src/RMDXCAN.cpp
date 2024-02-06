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

int RMDSERIES::canWriteCommand(_command l_Command, _bool waitForReply = true, unsigned long canTimeOut = 500000, unsigned int* g_ErrorCode)
{
  _command l_Message[8]={0};

}

void RMDSERIES::LogError(string functionName, int l_Result, unsigned int l_ErrorCode)
{

}