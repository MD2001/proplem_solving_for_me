#include <stdio.h>
#define max_elment	10

int main()
{
	int num_of_element=10;
	printf("Enter num of numbers: \n");
	scanf("%d",&num_of_element);
	int arr1[max_elment]={0};
	int arr2[max_elment]={0};
	int arr3[max_elment*2]={0};
	
	//take elments of array1
	printf("Input arr1 elments: \n");
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr1[i]);
	}
	//take elments of array2
	printf("Input arr2 elments: \n");
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	
	/**make theird array that containe arr1+arr2 arranged Elements*/
	
	//print the result array
	printf("the arr is: ");
	for(int i=0;i<num_of_element*2;i++)
	{
		
		printf("%d, ",arr3[i]);
	}
	
	return 0;
}