#include <stdio.h>

int main()
{
	int x;
	printf("Input size: ");
	scanf("%d",&x);
	int arr[x];
	printf("Input elements: ");
	for(int i=0;i<x;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("output: ");
	for(int i=0;i<x;i++)
	{
		printf("%d, ",arr[i]);
	}
	
return 0;	
}