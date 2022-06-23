#include "rlserial.h"
#include <string.h>
void SendSerial(char *name, char *data)
{

  Serial.print(name);
  Serial.print(" ");
  Serial.pritn(data);
  Serial.println();
}
void SendSerial(char *name, double data)
{

  Serial.print(name);
  Serial.print(" ");
  Serial.print(data);
  Serial.println();
}