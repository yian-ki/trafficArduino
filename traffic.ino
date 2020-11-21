  
//declaring values that are constant for each of the LEDs; the values at the pins won't change
const int red = 12;
const int orange = 11;
const int green = 10;
const int redPed = 9;
const int greenPed = 8;
const int buttonPin = 2;

//the button push button value isn't constant as it will change when the push button is pushed
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  //initialises the pins either to input or output
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW)
  {
    //normal conditions when buton is not pressed
    digitalWrite(redPed, HIGH);//red pedestrian light is always on if the button is not pressed
    
    //green light goes on, stays on for 3s then goes off
    digitalWrite(green, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
    //then the orange light goes on, stays on for 1s and goes off
    digitalWrite(orange,HIGH);
    delay(1000);
    digitalWrite(orange, LOW);
    //the red light then goes on, stays on for 3s, then goes off
    digitalWrite(red, HIGH);
    delay(3000);
    digitalWrite(red, LOW);
  }
  //when the push button is pressed
  else
  {
   if (green == HIGH)
   {
    //the green light goes off, the orange goes on for 1s then the red goes on
    digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);
    delay(1000);
    digitalWrite(red, HIGH);
    // the red pedestrian goes off while the green one goes on
    digitalWrite(redPed, LOW);
    digitalWrite(greenPed, HIGH);
    delay(5000);//5s passes before normal operation is resumed
   }
  }
}
//declaring values that are constant for each of the LEDs; the values at the pins won't change
const int red = 12;
const int orange = 11;
const int green = 10;
const int redPed = 9;
const int greenPed = 8;
const int buttonPin = 2;

//the button push button value isn't constant as it will change when the push button is pushed
int buttonState = 0;
void setup() {
  // put your setup code here, to run once:
  //initialises the pins either to input or output
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(redPed, OUTPUT);
  pinMode(greenPed, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW)
  {
    //normal conditions when buton is not pressed
    digitalWrite(redPed, HIGH);//red pedestrian light is always on if the button is not pressed
    
    //green light goes on, stays on for 3s then goes off
    digitalWrite(green, HIGH);
    delay(3000);
    digitalWrite(green, LOW);
    //then the orange light goes on, stays on for 1s and goes off
    digitalWrite(orange,HIGH);
    delay(1000);
    digitalWrite(orange, LOW);
    //the red light then goes on, stays on for 3s, then goes off
    digitalWrite(red, HIGH);
    delay(3000);
    digitalWrite(red, LOW);
  }
  //when the push button is pressed
  else
  {
   if (green == HIGH)
   {
    //the green light goes off, the orange goes on for 1s then the red goes on
    digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);
    delay(1000);
    digitalWrite(red, HIGH);
    // the red pedestrian goes off while the green one goes on
    digitalWrite(redPed, LOW);
    digitalWrite(greenPed, HIGH);
    delay(5000);//5s passes before normal operation is resumed
   }
  }
}