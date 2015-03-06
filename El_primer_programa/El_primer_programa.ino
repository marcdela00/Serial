/**********************************************************************
*** Primer programa on el led L fa pampallugues                    ****
***                                                                ****
***                  Descripció programa                           ****
***                                                                ****
***                                          Marc de la Fuente     ****
**********************************************************************/

//*********************includes****************************************

//*********************variavles***************************************

//*********************setup*******************************************
void setup () {
  pinMode(13, OUTPUT);
 }


//*********************loop********************************************
void loop () { 
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);  
  delay(120);
  digitalWrite(13, HIGH);   
  delay(100);  
  digitalWrite(13, LOW);  
  delay(20);  
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);  
  delay(20);
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);  
  delay(20);
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);  
  delay(200);
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);  
  delay(120);
  digitalWrite(13, HIGH);   
  delay(100); 
  digitalWrite(13, LOW);    
  delay(1000);         
  
 }
