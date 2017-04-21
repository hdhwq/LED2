#include "stack.h"

int main()
{
	stack_t * sta1= NULL;
	sta1 = stack_init();
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
