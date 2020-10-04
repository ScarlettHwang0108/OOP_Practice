#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c; 	float root1, root2;
	printf("Enter the values of a, b and c:\n");
	scanf_s("%f%f%f", &a, &b, &c);
	
	if (fabs(a) <= 1e-6)
	{
		if (fabs(b) <= 1e-6)
			printf("this is not an equation!\n");
		else
		{
			printf("the root is %6.2f", -c / b);
		}
	}
	else
	{ 
		float disc = b * b - 4 * a * c;
		if (disc < 0)
			printf("the equation has no real roots\n");
		if (disc == 0)
		{ 
			root1 = root2 = -b / (2 * a);
			printf("the root is %6.2f", root1);
		}
		if (disc > 0)
		{
			root1 = (-b + sqrt(disc)) / (2 * a);
			root2 = (-b - sqrt(disc)) / (2 * a);
			printf("the root is %6.2f and %6.2f", root1, root2);
		}
	}
	return 0;
}