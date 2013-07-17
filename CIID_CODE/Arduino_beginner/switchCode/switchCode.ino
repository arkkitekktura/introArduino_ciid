//declare your variables
int switchPin = 4;//digital input pin for switch
int yellowLedPin = 2;//digital output for LED1
int redLedPin = 3; //digital output pin for an LED
int switchState = 0;//the state of the switch

void setup(){
  pinMode(switchPin, INPUT);//set the switch pin to be an input
  pinMode(yellowLedPin ,OUTPUT);//set the yellow led pin to be an output
  pinMode(redLedPin, OUTPUT);//set the red LED pin to be output

}

void loop(){

  //read the switch input
  switchState = digitalRead(switchPin);
  if(switchState ==1){
    //if switch is closed
    digitalWrite(yellowLedPin, HIGH);//turn the yellow LED on
    digitalWrite(redLedPin, LOW);//turn off redLED

  }
  else{
    //if the switch is open:
    digitalWrite(yellowLedPin, LOW);//turn off LEDyellow
    digitalWrite(redLedPin, HIGH);//turn on redLED
  }
}

