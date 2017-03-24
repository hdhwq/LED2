#include<stdio.h>

int zhishu(int num)
{
int j=2,z;
while(j<num)
{
if (num%j == 0)
{
	z = 1;
	break;
}
else
	j++;
if (j == num)
{
	z=0;
	break;
}
  
}

return z;
}


int main ()
{
int a,b,max,min,i;
scanf("%d%d",&a,&b);
 if (a>b)
 {
	max=a;
    min=b;
 }
 else
 {
    max=b;
    min=a;

	}
 
 i=max%min;
while(zhishu(i))
{

if(min>i)
{
	max=min;
	min=i;
}
else
{
	max=i;
	min=max;
}

i=max%min;

}

printf("GCD=%d\n",i);
return 0;
}
