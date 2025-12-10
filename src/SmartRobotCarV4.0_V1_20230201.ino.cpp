# 1 "/var/folders/0x/bw_s16y95gl6mpdtls31trrr0000gn/T/tmpmu9a_ld3"
#include <Arduino.h>
# 1 "/Users/ericb/Documents/PlatformIO/Projects/251209-224459-uno/src/SmartRobotCarV4.0_V1_20230201.ino"
# 9 "/Users/ericb/Documents/PlatformIO/Projects/251209-224459-uno/src/SmartRobotCarV4.0_V1_20230201.ino"
#include <avr/wdt.h>
#include "ApplicationFunctionSet_xxx0.h"
void setup();
void loop();
#line 12 "/Users/ericb/Documents/PlatformIO/Projects/251209-224459-uno/src/SmartRobotCarV4.0_V1_20230201.ino"
void setup()
{

  Application_FunctionSet.ApplicationFunctionSet_Init();
  wdt_enable(WDTO_2S);
}

void loop()
{

  wdt_reset();
  Application_FunctionSet.ApplicationFunctionSet_SensorDataUpdate();
  Application_FunctionSet.ApplicationFunctionSet_KeyCommand();
  Application_FunctionSet.ApplicationFunctionSet_RGB();
  Application_FunctionSet.ApplicationFunctionSet_Follow();
  Application_FunctionSet.ApplicationFunctionSet_Obstacle();
  Application_FunctionSet.ApplicationFunctionSet_Tracking();
  Application_FunctionSet.ApplicationFunctionSet_Rocker();
  Application_FunctionSet.ApplicationFunctionSet_Standby();
  Application_FunctionSet.ApplicationFunctionSet_IRrecv();
  Application_FunctionSet.ApplicationFunctionSet_SerialPortDataAnalysis();

  Application_FunctionSet.CMD_ServoControl_xxx0();
  Application_FunctionSet.CMD_MotorControl_xxx0();
  Application_FunctionSet.CMD_CarControlTimeLimit_xxx0();
  Application_FunctionSet.CMD_CarControlNoTimeLimit_xxx0();
  Application_FunctionSet.CMD_MotorControlSpeed_xxx0();
  Application_FunctionSet.CMD_LightingControlTimeLimit_xxx0();
  Application_FunctionSet.CMD_LightingControlNoTimeLimit_xxx0();
  Application_FunctionSet.CMD_ClearAllFunctions_xxx0();
}