#include<stdio.h>
#include<ctype.h>
void main()
{
	int n,i,a[10],top,mid,bottom,flag=0,num;
	printf("Enter the Limit=");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number you want to search=");
	scanf("%d",&num);
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
	
		if(a[mid]==num)
		{
		flag=1;
		break;
		}
		if(num<a[mid])
		bottom=mid-1;
		else
		top=mid+1;
		
	}
	if(flag==1)
	printf("Given number is found at=%d ",mid);
	else
	printf(".................oops! number not found ................");
		
}
