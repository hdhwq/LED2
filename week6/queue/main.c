#include "queue.h"

int main()
{
	queue_t *que1 = NULL;
	que1 = queue_init();
	enqueue(que1,10);
	enqueue(que1,20);
	enqueue(que1,30);
	
	int value;

	while(1)
	{
		value = dequeue(que1);
		if(value == -999)
			break;
		printf("value =%d\n",value);
	}
	return 0;
}
