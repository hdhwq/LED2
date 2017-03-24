#include <stdio.h>

int main()
{
int n,i,k,l;

scanf("%d", &n);

for(l=1;l<=n; l++)
{
for(i=0;i<=n-1-l;i++)
	{
	printf(" ");
	}
	for(k=0 ; k<l; k++)
	{
	printf ("*");
	printf (" ");
    }
    printf("\n");
}
return 0;
}
