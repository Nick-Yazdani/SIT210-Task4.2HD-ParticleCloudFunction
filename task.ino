int red = D4;
int yellow = D2;
int blue = D5;

int toggleLED(String colour);

void setup() {
    Particle.function("toggle", toggleLED);
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(blue, OUTPUT);
}

void loop() {
}

int toggleLED(String colour)
{
  if(colour == "red")
  {
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(blue, LOW);
      return 1;
  }
  
  else if(colour == "blue")
  {
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(blue, HIGH);
      return 1;
  }
  
  else if(colour == "yellow")
  {
      digitalWrite(red, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(blue, LOW);
      return 1;
  }  
  
  else
  {
      return -1;
  }
}