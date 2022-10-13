#include <stdio.h>

#define max_size 	50
int main()
{
	char text1[max_size];
	char text2[max_size];
	int counter =0;
	
	printf("Enter your string : ");
	gets(text1);
	
	while(text1[counter]!='\0')
	{
		text2[counter]=text1[counter];
		counter++;
	}
	
	printf("the first string is : %s\n",text1);
	printf("the copy string is : %s\n",text2);
}