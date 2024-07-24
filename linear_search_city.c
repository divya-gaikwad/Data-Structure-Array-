#include<stdio.h>
#include<string.h>
void main()
{
	char a[100][200],city[12];
	int i,n,f=0;
	printf("entr limit=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\tcity =%s",a[i]);
	}
	printf("\n enter city to search");
	scanf("%s",city);

	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],city)==0)
		{
			f=1;
			break;	
		}	
	}
	
	if(f==1)
		printf("\n %s city is found at %d",a[i],i);
	else
		printf("not found");
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
