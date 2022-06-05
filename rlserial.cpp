#include "rlserial.h"
#include <string.h>
void SendSerial(char* name ,char *data)
{
 
Serial.print(strcat(name," "));
  Serial.print(data);
 Serial.println(); 
}