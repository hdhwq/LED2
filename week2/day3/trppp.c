#include <stdio.h>

int main()
{
int n,i,k,l;

scanf("%d", &n);

for(l=1;l<=n; l++)
{
	for(k=0 ; k<l; k++)
	{
	printf ("*");
	for(i=1;i<l;i++)
	printf (".");
    }
    printf("\n");
}
return 0;
}
