
const int coin = 7;

long lastRun = millis();
String sendToApp = "N";

/********************************************************************************/
void setup()
{
  //set the motor control pins as outputs
  pinMode(coin, INPUT_PULLUP);

  Serial.begin(9600);           //begin serial communication with the computer
  
  Serial.println(sendToApp);
}

/********************************************************************************/
void loop()
{
  if ((millis() - lastRun) > 100)
  {
    lastRun = millis();
    if (digitalRead(coin))
    {
      sendToApp = "C";
    }
    else
    {
      sendToApp = "N";
    }
    Serial.println(sendToApp);
  }
}
