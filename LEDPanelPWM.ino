#define PIN_NUM 7

/************* USER SETTINGS *************/
const double DUTY_PERCENT = 0.4;   // Time device is on (0-1)
const double CYCLE_SECONDS = 5*60;  // Total cycle length (seconds)
/****************************************/


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_NUM, OUTPUT); //Digital pin 7
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_NUM, HIGH); //turn panel on
  delay(CYCLE_SECONDS*DUTY_PERCENT*1000);
  digitalWrite(PIN_NUM, LOW); //turn panel off
  delay(CYCLE_SECONDS*(1-DUTY_PERCENT)*1000);
}
