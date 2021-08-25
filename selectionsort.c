#include<stdio.h>
int small(int[],int,int);
void selection(int[],int);
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
    selection(a,n);
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void selection(int a[],int n)
{
int k,temp=0,pos;
for(k=0;k<n;k++)
{
	pos=small(a,k,n);
	temp=a[k];
	a[k]=a[pos];
	a[pos]=temp;	
}
}
int small(int a[],int k,int n)
{
	int small=a[k],pos=k,i;
	for(i=k+1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i;
		}
	}
return pos;
}
