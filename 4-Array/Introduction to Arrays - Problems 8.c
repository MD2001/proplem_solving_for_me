#include <stdio.h>
int main()
{
	int sum=0;
	int num_of_element=10;
	printf("Enter num of numbers: \n");
	scanf("%d",&num_of_element);
	int arr1[num_of_element];
	int arr2[num_of_element];
	printf("Input arr1 elments: \n");
	
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	for(int i=0;i<num_of_element;i++)
	{
		arr2[i]=arr1[i];
	}
	
	printf("the output of array1 is :");
	for(int i=0;i<num_of_element;i++)
	{
		printf("%d, ",arr1[i]);
	}
	
	printf("\nthe output of array2 is :");
	for(int i=0;i<num_of_element;i++)
	{
		printf("%d, ",arr2[i]);
	}
	
	return 0;
}