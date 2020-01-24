void setup() {

//motor A
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);

//motor B
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);


while(1){
    delay(1000);
    digitalWrite(2, HIGH); //forward
    digitalWrite(4, LOW); //forward
    analogWrite(3, 120); //pin 3 is PWM, 178/255 = (about) 70% speed. Max is 255.
    
    digitalWrite(5, LOW); //forward
    digitalWrite(7, HIGH); //for7ward
    analogWrite(6, 120); //pin 3 is PWM, 178/255 = (about) 70% speed. Max is 255.
    
    delay(2000);
    
    digitalWrite(2, LOW); //reverse
    digitalWrite(4, LOW); //reverse
    analogWrite(3, 90); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255.
    
    digitalWrite(5, LOW); //reverse
    digitalWrite(7, LOW); //reverse
    analogWrite(6, 90); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255.
    
    break;
    }
}

void loop() {

}
