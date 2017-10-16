//http://ide.geeksforgeeks.org/TpKMP2

#include<stdio.h>
#include<stdlib.h>
void quicksort(int A[],int low,int high);
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
 

int partition (int A[], int low, int high)
{
    int pivot = A[high];   
    int i = (low - 1); 
    for (int j = low; j <= high- 1; j++)
    {
        if (A[j] <= pivot)
        {
            i++;    
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[high]);
    return (i + 1);
}
void quicksort(int A[], int low, int high)
{
    if (low < high)
    {
        
        int pi = partition(A, low, high);
        quicksort(A, low, pi - 1);
        quicksort(A, pi + 1, high);
    }
}
int min(int A[],int k,int n)
{
    int i=0,j=n-1,count=0;
    quicksort(A, 0, n-1);
    while(i<j)
    {
        count=count+A[i];
        i++;
       
        j=j-k;
    }
    if(i==j)
    count=count+A[i];
    return count;
}
int max(int A[],int k,int n)
{
    int i=0,j=n-1,count=0;
    quicksort(A, 0, n-1);
    while(i<j)
    {
        count=count+A[j];
        j--;
        i=i+k;
    }
    if(i==j)
    count=count+A[j];
    return count;
}
int main()
{

    int n,i,j,t,k;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d %d",&n,&k);
        int A[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        
        printf("%d %d\n",min(A,k,n),max(A,k,n));
        t--;
    }
	return 0;
}