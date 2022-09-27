#include <stdio.h>
void print_max_min(int num1,int num2);
int main()
{
	int x,y;
	printf("Input two numbers: ");
	scanf("%d %d",&x,&y);
	print_max_min(x,y);
	return 0;
}

void print_max_min(int num1,int num2)
{
	if(num1>num2)
	{
		printf("Maximum = %d\nMinimum = %d",num1,num2);
	}
	else
	{
		printf("Maximum = %d\nMinimum = %d",num2,num1);
	}
}