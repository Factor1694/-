#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, D, x1, x2;
  
  printf("Enter numbers a, b, c\n");
  scanf("%1f", &a);
  scanf("%1f", &b);
  scanf("%1f", &c);
  
  D=b*b-4*a*c
  if (D>0
  {
    
    x1 = ( -b + sqrt(D) ) / (2*a);
    x2 = ( -b - sqrt(D) ) / (2*a);
    printf ("x1 = %.3lf\n x2 = %3lf\n", x1, x2);
    
  }
  else if (D==0)
  {
    printf ("The discriminant is less than zero\n);
    }
    
    return 0;
}
