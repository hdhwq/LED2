#include<stdio.h>

int main()
{
	int x=1;
    int	y=2;
	int z=3;
	printf("%p,%d,%d\n",&x,sizeof(x),x);
	printf("%p,%d,%d\n",&y,sizeof(y),y);
	printf("%p,%d,%d\n",&z,sizeof(z),z);

	int array[3];
	int i;
	for(i=0;i<3;i++)
		array[i] = i+1;
	for(i=0;i<3;i++)
		printf("%p,%d,%d\n",&array[i],sizeof(array[i]),array[i]);
	



return 0;
}
