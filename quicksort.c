#include<stdio.h>
void quicksort(int[],int,int);
void main()
{
	int a[10],n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("the sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void quicksort(int a[],int first,int last)
{
	int temp,i,j,pivot;
	if(first<last)
	{
		i=first;
		j=last;
		pivot=first;
		while(i<j)
		{
			if(a[i]<=a[pivot]&&i<=last)
			i++;
			while(a[j]>a[pivot]&&j>=0)
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[j];
		a[j]=a[pivot];
		a[pivot]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
