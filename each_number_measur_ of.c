//occurance of the number
#include<stdio.h>
int main()
{
	int num,a[10],i,j,n,count=0;
	printf("enter the limit for the array=");
	scanf("%d",&n);
	printf("enter elements in the array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++)
	{
		num=a[i];
		count=0;
		for(j=0;j<n;j++)
			{
			if(a[j]==num)
			count++;
			}
			printf("\n Occurance of the number %d is =%d",num,count);
	
	}
	
}
