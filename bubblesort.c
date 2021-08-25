#include<stdio.h>
void bubble(int[],int);
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
    bubble(a,n);
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void bubble(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;	
			}
			
			
		}
	}
}
