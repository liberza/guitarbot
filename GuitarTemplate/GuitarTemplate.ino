#include <Servo.h>
/*
Defines all the solenoid pins as
their respective strings and frets.
*/
#define LE_1 22
#define A_1 23
#define D_1 24
#define G_1 25
#define B_1 26
#define HE_1 27
#define LE_2 28
#define A_2 29
#define D_2 30
#define G_2 31
#define B_2 34
#define HE_2 35
#define LE_3 36
#define A_3 37
#define D_3 38
#define G_3 39
#define B_3 40
#define HE_3 41

Servo LE_string;
Servo A_string;
Servo D_string;
Servo G_string;
Servo B_string;
Servo HE_string;

#define BEAT 1250

/*
Function that does "hammer-ons", where
the string is pressed but not strummed.
*/
int hammerOnDelay(int fret, int duration){
  digitalWrite(fret, HIGH);
  delay(duration);
  digitalWrite(fret, LOW);
}

int LE_strum(){
  if (LE_string.read() >= 109){
    LE_string.write(100);
  }
  else {
  LE_string.write(110);
  }
}

int A_strum(){
  if (A_string.read() >= 90){
    A_string.write(79);
  }
  else {
    A_string.write(91);
  }
}

int D_strum(){
  if (D_string.read() >= 96){
    D_string.write(88);
  }
  else {
    D_string.write(97);
  }
}

int G_strum(){
  if (G_string.read() >= 105){
    G_string.write(90);
  }
  else {
    G_string.write(105);
  }
}
    
int B_strum(){
  if (B_string.read() >= 116){
    B_string.write(104);
  }
  else {
    B_string.write(116);
  }
}

int HE_strum(){
  if (HE_string.read() >= 80){
    HE_string.write(67);
  }
  else {
    HE_string.write(80);
  }
}
    
int hammerOn(int fret){
  digitalWrite(fret, HIGH);
}

int hammerOff(int fret){
  digitalWrite(fret, LOW);
}

int pick(int fret, int string, int time){
  digitalWrite(fret, HIGH);
}
  
void setup() {
  pinMode(22, OUTPUT);   
  pinMode(23, OUTPUT);  
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);  
  LE_string.attach(44);
  A_string.attach(45);
  D_string.attach(46);
  G_string.attach(47);
  B_string.attach(48);
  HE_string.attach(49);
}

void loop() {

}
