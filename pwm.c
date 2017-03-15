#include<stdio.h>
#include<wiringPi.h>

int main()
{
	wiringPiSetup();
    pinMode(8,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    softPwmCreate(7,0,100);
    softPwmCreate(9,0,100);
    softPwmCreate(0,0,100);
    
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
    
    while(1)
    {
		
		
        digitalWrite(8,LOW);
        softPwmWrite(7,0);
        delay(500);
        digitalWrite(8,HIGH);
        softPwmWrite(7,100);
        
       
        
        digitalWrite(2,LOW);
        softPwmWrite(9,50);
        delay(500);
        digitalWrite(2,HIGH);
        softPwmWrite(9,100);
        
       
        
        digitalWrite(3,LOW);
        softPwmWrite(0,80);
        delay(500); 
        digitalWrite(3,HIGH);  
        softPwmWrite(0,100);
	}
	
	
	return 0;
}
