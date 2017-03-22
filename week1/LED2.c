#include<stdio.h>
#include<wiringPi.h>

int main()
{
	wiringPiSetup();
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(0,OUTPUT);
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(0,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(8,HIGH);
    
    digitalWrite(9,LOW);
    
    int time;
    int total=20;
    while(1)
    {
		
		for(time=20 ; time>0 ; time--)
		{
			digitalWrite(8,HIGH);
			
			delay (time);
			
			digitalWrite(8,LOW);
			
			delay(total-time);
	
		}
		for(time=0 ; time<20; time++)
		{
		    digitalWrite(8,HIGH);
			
			delay (time);
			
			digitalWrite(8,LOW);
			
			delay(total-time);
			
			
			}
}
	return 0;
}




