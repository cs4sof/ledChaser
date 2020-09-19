

// LED Chaser Initial Code 

//Task #1: Based on the code below, describe the components most likely needed for in this circuit. 
//Task #2: Rewrite the following code in any way you want as long as you: (1) reduce the lines of code, (2) improve readability and maintenance and (3) has no errors
//Task #3: Include comments in your code and describe (1) what your modified code does and (2) why is you code better than the initial code.

// NOTE: You cam modify the timing/delay of how LEDs light on or off.  

int ledPin01 =  13;  
int ledPin02 = 12;   
int ledPin03 = 11;   
int ledPin04 = 10;   
int ledPin05 = 9;   
int ledPin06 = 8;   
int ledPin07 = 7;   

void setup()   
{                
 
  pinMode(ledPin01, OUTPUT);
  pinMode(ledPin02, OUTPUT);
  pinMode(ledPin03, OUTPUT); 
  pinMode(ledPin04, OUTPUT);  
  pinMode(ledPin05, OUTPUT);
  pinMode(ledPin06, OUTPUT);   
  pinMode(ledPin07, OUTPUT);  
}  


void loop()                     
{
  digitalWrite(ledPin01, HIGH);   
  digitalWrite(ledPin02, HIGH);   
  digitalWrite(ledPin03, HIGH);  
  digitalWrite(ledPin04, HIGH);  
  digitalWrite(ledPin05, HIGH);  
  digitalWrite(ledPin06, HIGH);   
  digitalWrite(ledPin07, HIGH);   
  delay(1000);                  
  digitalWrite(ledPin01, LOW);   
  digitalWrite(ledPin02, LOW);   
  digitalWrite(ledPin03, LOW);  
  digitalWrite(ledPin04, LOW);  
  digitalWrite(ledPin05, LOW);   
  digitalWrite(ledPin06, LOW);   
  digitalWrite(ledPin07, LOW);   
  delay(1000);                  
}
