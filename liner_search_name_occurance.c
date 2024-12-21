//liner search program to find occurrence 
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,count=0;
	int a[10][10],num[10];
	printf("enter the limit for the array=");
	scanf("%d",&n);
	printf("enter elements in the array=");
	for(i=0;i<n;i++)
	{
		gets(a[i]);	
		
	}
	printf("enter  to count occurance=");
	gets(num);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],num)==0)
		count++;	
	}
	if(count==0)
	printf("numbr not found");
	printf("occurance of the number is =%d",count);
	
}
