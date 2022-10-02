#include <stdio.h>
#define max_elment	30

int main()
{
	int doblecate=0;
	int num_of_element=10;
	printf("Enter num of numbers: \n");
	scanf("%d",&num_of_element);
	int arr[max_elment]={0};
	printf("Input arr elments: \n");
	
	for(int i=0;i<num_of_element;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<num_of_element;i++)
		{
		for(int j=i+1;j<num_of_element;j++)
					
			{
			if(arr[i]==arr[j])
				{
					doblecate++;
					break;
				}
			}
		}
		
		  printf("\nTotal number of duplicate elements found in array = %d", doblecate);
		
return 0;
}
