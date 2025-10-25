#define PIEZO_PIN 9
const int trigger=6;
const int echo=7;
const int soundPin=A0;
float distance;
float dist_inches;
const float DIST_THRESHOLD=9.8;
const float SOUND_THRESHOLD=100;
void setup(){
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(PIEZO_PIN,OUTPUT);
}
void loop(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
    digitalWrite(trigger,LOW);
    distance=pulseIn(echo,HIGH);
    distance=distance*0.0001657;
    dist_inches=distance*39.37;
    int soundvalue=analogRead(soundPin);
    if(dist_inches<DIST_THRESHOLD&&soundvalue>SOUND_THRESHOLD){
      tone(PIEZO_PIN,1500);
      delay(200);
      noTone(PIEZO_PIN);
      Serial.println("Intrusion detected ! Object with sound at distance:");
      Serial.println(dist_inches);
      Serial.println("in");
     
    }
    else if(soundvalue>SOUND_THRESHOLD){
      Serial.println("Sound detector");
    }
    else {
      Serial.println("No intrusion detector");
    }
    delay(200);
   
    }
