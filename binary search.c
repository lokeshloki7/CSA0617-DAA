#include<stdio.h>
int binsearch(int a[],int ele,int low,int high)
{
while(low<=high)
{
	int mid=low+(high-low)/2;
	if(a[mid]==ele)
	return mid;
	if(a[mid]<ele)
	low=mid+1;
	else
	high=mid-1;
}
return -1;
}
int main()
{
	int a[20],i,n,res,ele;
	printf("size:");
	scanf("%d",&n);
	printf("array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter ele to find");
	scanf("%d",&ele);
	res=binsearch(a,ele,0,n-1);
	printf("element is found at index %d",res);	
}
