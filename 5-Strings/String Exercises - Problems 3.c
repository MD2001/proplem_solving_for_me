#include <stdio.h>

#define max_size 	100
int main()
{
	char text1[max_size];
	char text2[max_size];
	int index1 =0;
	int index2 =0;
	
	printf("Enter your first string : ");
	gets(text1);
	printf("Enter your Second string : ");
	gets(text2);
	
	while(text1[index1] != '\0')
	{
		index1++;
	}
	
	while(text2[index2] != '\0')
	{
		text1[index1]=text2[index2];
		index1++;
		index2++;
	}
	
	text1[index1]='\0';
	printf("the string is : %s",text1);
	return 0;
}		