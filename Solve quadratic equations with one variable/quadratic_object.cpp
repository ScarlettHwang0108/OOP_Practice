#include <stdio.h>
#include <math.h>

class quadratic_equation {
public:
	quadratic_equation(float aa, float bb, float cc):a(aa),b(bb),c(cc){}
	int quadratic()
	{
		if (fabs(a) <= 1e-6)
		{
			if (fabs(b) <= 1e-6)
				return -1;
			else
			{
				root1 = -c / b;
				return 1;
			}
		}
		else
		{
			float disc = b * b - 4 * a * c;
			if (disc < 0)
				return 0;
			if (disc == 0)
			{
				root1 = root2 = -b / (2 * a);
				return 2;
			}
			if (disc > 0)
			{
				root1 = (-b + sqrt(disc)) / (2 * a);
				root2 = (-b - sqrt(disc)) / (2 * a);
				return 3;
			}
		}
	}
	void print()
	{
		switch (quadratic())
		{
		case -1:
			printf("this is not an equation!\n");
			break;
		case 0:
			printf("the equation has no real root.\n");
			break;
		case 1:
			printf("the equation has one root. it is %6.2f", root1);
			break;
		case 2:
			printf("the equation has two same roots. they are %6.2f", root1);
			break;
		default:
			printf("the equation has two real roots. they are %6.2f and %6.2f", root1, root2);
		}
	}
private:
	float a, b, c;
	float root1, root2;
};

int main()
{
	float _a, _b, _c; 	float _root1, _root2;
	printf("Enter the values of a, b and c:\n");
	scanf_s("%f%f%f", &_a, &_b, &_c);

	quadratic_equation qe(_a, _b, _c);
	qe.print();
	return 0;
}