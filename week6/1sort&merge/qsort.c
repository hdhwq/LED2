#include "qsort.h"

int big[10]={0};
int small[10]={0};


//----------------我的快排代码-------------------------

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
//-----------------归并排序----------------
void merger_sort(int *arr, int*dst, int left, int right)
{		
	if(left>=right)
		return;
	int mid_index = (left+right)/2;
	
	merger_sort(arr, dst, left, mid_index);
	merger_sort(arr, dst, mid_index+1, right);
	merge(arr, dst, left, mid_index, right);
		
}

void merge(int *arr, int *dst, int left, int mid_index, int right)
{
	 int i = left, j=mid_index+1, k = left;
	  while(i!=mid_index+1 && j!=right+1)
    {
        if(arr[i] > arr[j])
            dst[k++] = arr[j++];
        else
            dst[k++] = arr[i++];
    }
    while(i != mid_index+1)
        dst[k++] = arr[i++];
    while(j != right+1)
        dst[k++] = arr[j++];
    for(i=left; i<=right; i++)
        arr[i] = dst[i];

}

//------------------国际歌归并--------------
void merge_sort(int *arr, int left, int right)
{
	if(left>=right)
		return;
	int mid =  (left+right);
	merge_sort( arr, left, mid);
	merge_sort( arr, mid+1, right);
	merge1(arr, left,  mid,  right);
}
static int temp[len];
void merge1(int *arr,  int left, int mid, int right)
{
	int i = left;
	int j = mid+1;
	int t = left;
	while(i<=mid && j<=right)
	{
		if (arr[i] < arr[j])
			temp[t++] = arr[i++];
		else 
			temp[t++] = arr[j++];
	}
	while(i<=mid)
		temp[t++] = arr[i++];
	while(j<=right)
		temp[t++] = arr[j++];
	for(i=left; i<=right; i++)
        arr[i] = temp[i];

}























