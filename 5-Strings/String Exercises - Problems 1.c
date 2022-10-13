#include <stdio.h>
#define max_size	50

int main()
{
	char text[max_size];
	int count=0;
	
	printf("Enter your string: ");
	// what it do??
	gets(text);
	
	while(text[count]!='\0')
	{
		count++;
	}
	
	printf("Lenth is :%d",count);
	
	
}