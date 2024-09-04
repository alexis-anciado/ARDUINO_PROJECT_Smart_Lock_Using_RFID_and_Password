const int RELAY_PIN = 8;  // the Arduino pin, which connects to the IN pin of relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 3 as an output.
  pinMode(RELAY_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RELAY_PIN, HIGH); // unlock the door
  delay(5000);
  digitalWrite(RELAY_PIN, LOW);  // lock the door
  delay(5000);
}