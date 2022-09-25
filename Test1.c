#include <stdio.h>

#define size_of_name  20
int main() {
	
	int digit=0,num=0;
   char name[size_of_name]="";
   scanf("%s",name);
   printf("the input is:%s\n",name);
  
     for(int i=0;i<size_of_name;i++)
	 {
		 printf("the cahr is [%d] %c\n",i,name[i]);
	 }
   for(int i=0;i<size_of_name-1;i++)
   {
		if((name[i]>='0')&&(name[i]<='9'))
	   {
		   num=name[i]-'0';
		   name[i]=0;
		   
		   if(digit==0)
		   {
			   name[size_of_name-1]+=(num*10);
			   digit++;
		   }
		   else
		   {
			   name[size_of_name-1]+=num;
			   digit++;
		   }
		   
	   }
   }
   printf("the output is:%s\n",name);
   printf("%d\n",name[size_of_name-1]);
    return 0;
}