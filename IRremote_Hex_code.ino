#include<IRremote.h>
const int RECV_PIN = 35;

void setup()
{
  Serial.begin(115200);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);
}
void loop()
{
  if(IrReceiver.decode())
  {
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
    delay(1000);
    IrReceiver.resume();
  }
}