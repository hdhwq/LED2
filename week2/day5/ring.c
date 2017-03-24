#include <stdio.h>

int main()
{
	int n;
	printf("inset lie\n");
	scanf("%d",&n);

	int i=0,j=0;
	int arr[][100]={0};
	int count = 1;
	int s=0	;

for(s=0; s<(n/2+1) ; s++)
{	
	for(; j<n-1-s; j++)
		arr[i][j] = count++;
		printf("i=%d,j=%d\n", i, j);
		
	for(; i<n-1-s; i++)
		arr[i][j] = count++;
		printf("i=%d,j=%d\n", i, j);
		
	for(; j>s; j--)
		arr[i][j] = count++;
		printf("i=%d,j=%d\n", i, j);
		
	for(; i>s+1; i--)
		arr[i][j] = count++;
		printf("i=%d,j=%d\n", i, j);
}	
		arr[i][j]=n*n;
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=0)
			printf("%4d ",arr[i][j]);
		}
			printf("\n");
		}

return 0;	
	}
