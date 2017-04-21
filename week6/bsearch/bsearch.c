#include "bsearch.h"


//----------------我的快排代码-------------------------
int big[len]={0};
int small[len]={0};

#if 1
void qsort_t(int *arr, int left, int right)
{		
	if(left>=right)
		return;
	int mid_index = partion(arr,left,right);
	qsort_t(arr, left, mid_index-1);
	qsort_t(arr, mid_index+1, right);
	
}

int partion(int *arr, int left, int right)
{
	int mid = arr[left];
	
	int b=0,s=0,m=left+1;
	for(m; m<=right; m++)
	{
		if(arr[m]>=mid)
		{
			big[b]=arr[m];
			b++;
		}
		else 
		{
			small[s]=arr[m];
			s++;
		}
		
	}
	int i=left,cnt=0;
	for(cnt; cnt<s; cnt++)
		{
	arr[i]=small[cnt];
	i++;
		}
	
	arr[i]=mid;
	int mid_index = i;
	cnt=0;
	for(cnt; cnt<b; cnt++)
	{
		arr[i+1] = big[cnt];
		i++;
	}

	return mid_index;
}
#endif


//----------------网上快排代码-------------------------
void quickSort1(int* root,int low,int high)  
{  
    int pat=root[low];  
    if(low<high)  
    {  
        int i=low,j=high;  
        while(i<j)  
        {     
            while(i<j&&root[j]>pat)  
                j--;  
            root[i]=root[j];  
  
  
            while(i<j&&root[i]<pat)  
                i++;  
            root[j]=root[i];  
  
        }  
        root[i]=pat;  
        quickSort1(root,low,i-1);  
        quickSort1(root,i+1,high);  
    }  
      
} 

void bseach_t(int value, int *array, int left, int right)
{	
	int mid_i= (left + right)/2;
	if(left==right-1||array[mid_i]==value)
	{	if(array[mid_i]==value){
				printf("array[%d] = %d\n",mid_i, array[mid_i]);
				return;
			}
	if(left==right-1){
	printf("sorry no item be searched !\n");
		return;
		}
	
}	
	
	if(array[mid_i]>value)
		bseach_t(value, array, left, mid_i);
	else
		bseach_t(value, array, mid_i, right);
		
}

















