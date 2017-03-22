#include <stdio.h>
#include <wiringPi.h>
#include <sys/time.h>
int main()
{
	wiringPiSetup();
	pinMode(9,INPUT);
    pinMode(8,OUTPUT);
    
    while(1)
    {
		digitalWrite(8,LOW);
		digitalWrite(8,HIGH);
        delayMicroseconds(10);
        digitalWrite(8,LOW);
        
	struct timeval start,end;
    int val;
    
     while(1)
     {
	  val= digitalRead(9);	
	    
      if (val==HIGH)
       {
        printf ("this is T1\n");
        break;
       }
      }
     gettimeofday(&start,NULL);
     
     while(1)
     {
		 val= digitalRead(9);
		 if (val==LOW)
          {
          printf ("this is T2\n");
           break;
		   }
		
     }
    gettimeofday(&end,NULL);
	
	long t1 = start.tv_sec *1000000 + start.tv_usec;
	long t2 = end.tv_sec *1000000 + end.tv_usec;
	
	float dis = (float)(t2-t1)/1000000*17000;
	printf("%fcm\n",dis);
	delay(2000);
}
	return 0;
}
