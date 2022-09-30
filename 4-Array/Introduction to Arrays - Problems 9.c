#include <stdio.h>
#define max_elment	30

int main()
{
	int temp=0, position, inserted_element, sum=0;
	int num_of_element=10;
	printf("Enter num of numbers: \n");
	scanf("%d",&num_of_element);
	int arr[max_elment]={0};
	printf("Input arr elments: \n");
	
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Input element to insert: ");
	scanf("%d",&inserted_element);
	num_of_element++;
	printf("Input position where to insert: ");
	scanf("%d",&position);
	
	
	for(int i= num_of_element;i>position;i--)
	{
			arr[i]=arr[i-1];
	}
	arr[position]=inserted_element;
	
	printf("the array is :");
	for(int i=0;i<num_of_element;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	return 0;
}