#include<stdio.h>
int main()
{
	int min,max,a[10],i,n;
	printf("enter size:");
	scanf("%d",&n);
	printf("array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	min=a[1];
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
	}
	printf("max element:%d",max);
	printf("\nmin element:%d",min);
}
