#include<stdio.h>
void binary(int[],int,int,int);
int main()
{
	int a[10],n,key,i;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter the %d elements into the array",n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter the key element to search:\n");
	scanf("%d",&key);
	binary(a,0,n-1,key);
	return 0;   
}
void binary(int a[],int low,int high,int key)
{
	int mid;
	mid=(low+high)/2;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("the element is found at %d position",mid+1);
			break;
		}
		else if(key<a[mid])
		{
		    binary(a,low,mid-1,key);
		    break;
	    }
		else
		{
		    binary(a,mid+1,high,key);
		    break;
	    }
    }
if(low>high)
   printf("the element is not found");
}
