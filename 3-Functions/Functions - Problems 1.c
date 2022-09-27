#include <stdio.h>
void find_cube(int num);
int main()
{
	int x;
	printf("Input any number: ");
	scanf("%d",&x);
	find_cube(x);
	return 0;
}

void find_cube(int num)
{
	printf("Cube of %d = %d",num,num*num);
}