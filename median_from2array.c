#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],m1,m2,n1,n2,n3,i,j,k;
	printf("enter limit for first array=");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter limit for second array=");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	i=k=j=0;
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
		
	}
	while(i<n1)
	c[k++]=a[i++];
	
	while(j<n2)
	c[k++]=b[j++];
	
	n3=n1+n2;
	printf("third array=");
	for(k=0;k<n3;k++)
	{
		printf("\t %d",c[k]);
		
	}
	printf("\n \n The median from these arrays is =%d",c[n3/2]);
}
