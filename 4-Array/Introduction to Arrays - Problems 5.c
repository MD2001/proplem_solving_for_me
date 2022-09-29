#include <stdio.h>
int main()
{
	int sum=0;
	int num_of_element=10;
	printf("Enter num of numbers: \n");
	scanf("%d",&num_of_element);
	int arr[num_of_element];
	printf("Input elements: \n");
	
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<num_of_element;i++)
	{
		for(int y=0;y<num_of_element-i;y++)
		{
			if(arr[y]>arr[y+1])
			{
				int temp=arr[y];
				arr[y]=arr[y+1];
				arr[y+1]=temp;
			}
		}
		
	}
	printf("the output is: ");
	for(int i=0;i<num_of_element;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\nthe second greatest num is : %d ",arr[num_of_element-2]);
	
	
return 0;	
}
