//search the occurance 
#include<stdio.h>
void main()
{
	int num,a[10],i,n,count=0;
	printf("Enter the limit for the array=");
	scanf("%d",&n);
	printf("Enter elements in the array=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf("Enter the number to count occurance=");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		count++;	
	}
	if(count==0)
	printf("numbr not found");
	printf("occurance of the number is =%d",count);
	
}
