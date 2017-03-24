#include <stdio.h>

int main()
{
	int arr [3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			arr[i][j] = random();
			
			}
		}
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d  ",arr[i][j]);
			
			}
			printf("\n");
		}
	
	
	}
