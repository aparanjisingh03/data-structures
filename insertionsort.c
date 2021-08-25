#include<stdio.h>
void insert(int[],int);
void main()
{
	int n,a[20],i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements to the sort");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    insert(a,n);
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
