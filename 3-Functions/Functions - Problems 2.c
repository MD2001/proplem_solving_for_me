#include <stdio.h>
int get_deimeter(int radius);
int get_Circumference(int radius);
int get_Area(int radius);
int main()
{
	int r;
	int dia, circ, area;
	printf("Input radius: ");
	scanf("%d",&r);
	dia=get_deimeter(r);
	circ=get_Circumference(r);
	area=get_Area(r);
	
	printf("Diameter = %d units\nCircumference = %d units\nArea = %d sq. units\n",dia, circ, area);
	
	return 0;
}

int get_deimeter(int radius)
{
	return radius*2;
}

int get_Circumference(int radius)
{
	return (radius*2*3.14);
}

int get_Area(int radius)
{
	return(3.14*radius*radius);
}
