#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    int i=low-1,j;
    int pivot=arr[high];
    for(j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
	//code
	int t;
		int i;
	scanf("%d",&t);
	while(t){
	    int n;
	    scanf("%d",&n);
	    
	int arr[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);

	for(i=0;i<n;i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");
	t--;
	}
	return 0;
}