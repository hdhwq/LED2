#include "bsearch.h"
int main()
{
	int array[len],dst[len];
		int i=0;
		srand(time(0));
		for(i;i<len;i++)
			array[i]=random()%1000;
		for(i=0;i<len;i++)
			printf(" %d  ", array[i]);printf("\n");		
		qsort_t(array, 0, len-1);
		
		for(i=0;i<len;i++)
		printf(" %d  ", array[i]);printf("\n");

	
		bseach_t(201 , array, 0, len-1);

}



