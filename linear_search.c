#include<stdio.h>
void main()
{
	int i,a[100],n,num,f=0,count;
	printf("enter the limit=");
	scanf("%d",&n);
	printf("the random num=");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		printf("%d\n",a[i]);
	}
	
	printf("enter number to search=");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		count++;
		if(a[i]==num)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		{
			printf("found at %d position is %d",i,num);	
		}
		else
		{
			printf("not found.....");
		}
	
	
}
