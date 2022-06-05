#include "rlserial.h"
#include <string.h>
void SendSerial(char* name ,char *data)
{
 
Serial.print(name+" ");
  Serial.print(data);
 Serial.println(); 
}
void SendSerial(char* name ,double data)
{
  Serial.println(); 
  Serial.print(name+" ");
  Serial.print(data);
 Serial.println(); 
}