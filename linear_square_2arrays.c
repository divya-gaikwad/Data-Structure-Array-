#include<stdio.h>
void main()
{
	int num,a[10],b[10],i,j=0,n;
	printf("enter the limit for the array=");
	scanf("%d",&n);
	printf("enter elements in the array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		b[j++]=a[i]*a[i];
		
	}
	printf("\nThe array of square=");
	for(j=0;j<n;j++)
	{
		printf("%d \t",b[j]);
	
	}
}
