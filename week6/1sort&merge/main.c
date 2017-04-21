#include "qsort.h"


int main()
{
	int array[len],dst[len];
		int i=0;
		srand(time(0));
	for(i;i<len;i++)
		{
	array[i]=random();
		}
	
	for(i=0;i<len;i++)
		printf(" %d  ", array[i]);printf("\n");
	//quickSort1(array, 0, 9);
	//qsort_t(array, 0, 9);
	merger_sort(array, dst, 0, len-1);

	for(i=0;i<len;i++)
	printf("-----%d\n", array[i]);


	return 0;
}
