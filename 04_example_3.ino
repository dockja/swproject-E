#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect
  }
  Serial.println("Hello world!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
  
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  
  delay(1000);
}
int toggle_state(int toggle) {
  if (toggle == 1){
  toggle = 0;
  }else{ 
    toggle = 1;}
  return toggle;
}
