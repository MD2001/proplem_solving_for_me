#include <stdio.h>



int main()
{	int sum=0;
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
		sum+=arr[i];
	}
	
	printf("Sum of all elements = %d",sum);
	return 0;
}