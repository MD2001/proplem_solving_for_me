#include <stdio.h>

#define size_of_name	    20
#define student_num			3

void add_array(int index,char arr1[student_num][size_of_name],char arr2[size_of_name]);
void sort_arr(char arr1[student_num][size_of_name]);
int main() {
	
	int digit=0,num=0;
   char name[size_of_name]="";
   char students[student_num][size_of_name];
   for(int y=0;y<student_num;y++){
   printf("plaese Enter name and degree: ");
  for(int i=0;i<size_of_name;i++)
   {
	   name[i]=0;
   }
   scanf("%s",name);
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
   num=0;
   digit=0;
   add_array(y,students,name);
   }
   sort_arr(students);
	printf("the students is first name: %s \n degree: %d \n",students[0],students[0][size_of_name-1]);
	printf("the students is secind name: %s \n degree: %d \n",students[1],students[1][size_of_name-1]);
	printf("the students is secind name: %s \n degree: %d \n",students[2],students[2][size_of_name-1]);
    return 0;
}


void add_array(int index,char arr1[student_num][size_of_name],char arr2[size_of_name])
{
	for(int i=0;i<size_of_name;i++)
	{
		arr1[index][i]=arr2[i];
	}
}

void sort_arr(char arr1[student_num][size_of_name])
{
	
	for(int i=0;i<student_num;i++)
	{
		for(int y=0;y<student_num-1;y++)
		{
			if((arr1[y][size_of_name-1])<(arr1[y+1][size_of_name-1]))
			{
			char temp[size_of_name]; 
			for(int x=0;x<size_of_name;x++)
			{
				temp[x]=arr1[y][x];	
			}
			add_array(y,arr1,arr1[y+1]);
			add_array(y+1,arr1,temp);
			}
		}
	}	
}