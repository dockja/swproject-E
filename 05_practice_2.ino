#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect
  }
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  count=0;
  while(1) {
    digitalWrite(PIN_LED, 0);
    delay(100);
    count +1;
    digitalWrite(PIN_LED, 1);
    delay(100);
    count = count +1;
     if (count == 9) {
      break;
     }else {
     continue;
  }
  }
  while(1) {
    digitalWrite(PIN_LED, 1);
  }
}
