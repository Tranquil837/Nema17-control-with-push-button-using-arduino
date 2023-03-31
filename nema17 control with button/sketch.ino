// Define pin connections & motor's steps per revolution
const int dirPin1 = 2;
const int stepPin1 = 3;
const int dirPin2 = 4;
const int stepPin2 = 5;

int stepDelay = 500;

const int buttonPin1 = 6;
const int buttonPin2 = 7;

int buttonState1 = 0;
int buttonState2 = 0;

void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin1, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(buttonPin1,INPUT_PULLUP); 
  pinMode(buttonPin2,INPUT_PULLUP);

}

void loop ()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  
  if (buttonState1 == HIGH)
  {
    clockwise();
  }

  if (buttonState2 == HIGH)
  {
    anticlockwise();
  }
}

void clockwise()
{
  //clockwise
  digitalWrite(dirPin1, HIGH);
  digitalWrite(dirPin2, HIGH);
  // Spin motor
  digitalWrite(stepPin1, HIGH);
  digitalWrite(stepPin2, HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(stepPin1, LOW);
  digitalWrite(stepPin2, LOW);
  delayMicroseconds(stepDelay);
}

void anticlockwise()
{
  //clockwise
  digitalWrite(dirPin1, LOW);
  digitalWrite(dirPin2, LOW);
  // Spin motor
  digitalWrite(stepPin1, HIGH);
  digitalWrite(stepPin2, HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(stepPin1, LOW);
  digitalWrite(stepPin2, LOW);
  delayMicroseconds(stepDelay);
}