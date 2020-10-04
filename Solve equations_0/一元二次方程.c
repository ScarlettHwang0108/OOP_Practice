#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c;
    float root1, root2;
    printf("please enter a,b and c:\n");
    scanf("%f,%f,%f", &a, &b, &c);
    if (fabs(a) <= 1e-6)//1e-6表示很小，a接近于0；fabs()是绝对值；
    {
        if (fabs(b) <= 1e-6)//b接近于0
            printf("this is not a equation");
        else
        {
            printf("the root is %6.2f", -c / b); //这时a为0，b不为0，一元二次变为一元一次，bx+c=0  
        }
    }
      else
      {
        float disc = b * b - 4 * a * c;
        if (disc < 0)
            printf("the equation has no real root!");
        if (disc == 0)
        {
            root1 = root2 = -b / (2*a);
            printf("the root is %f", root1);
        }
        if (disc > 0)
        {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("the roots are % 6.2f and %6.2f", root1, root2);
        }
      }

    return 0;
}

