#include <stdio.h>
void printEvenOdd(int first , int end);
int main()
{
	
	int first, end;
	printf("Enter first num: ");
	scanf("%d",&first);
	printf("Enter end num: ");
	scanf("%d",&end);
	
	printf("Odd numbers between %d to %d: ",first,end);
	printEvenOdd(first,end);
	printf("\n");
	printf("Even  numbers between %d to %d: ",first,end);
	printEvenOdd(first+1,end);
	
	return 0;
}

void printEvenOdd(int first,int end)
{
	if(first> end) return;
	printf("%d, ",first);
	printEvenOdd(first+2,end);
	
}