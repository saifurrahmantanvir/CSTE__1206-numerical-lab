// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>

double fun(double x)
{
   return (pow(x, 3) - x - 4);
}

int main()
{
   double a, b, x = 0, x0;

   printf("Root of X^3 - X - 4 = 0 using Bisection Method : \n");
   printf("-------------------------------------------------------\n");

   printf("Enter a : ");
   scanf("%lf", &a);

   printf("Enter b : ");
   scanf("%lf", &b);

   for (int i = 1; i <= 20; i++)
   {
      x0 = x;
      x = (a + b) / 2;

      printf("%d. No Approximate Root X%d = %lf\n", i, i, x);

      if (fun(x) > 0)
         b = x;
      else
         a = x;

      if (fabs(x0 - x) <= 0.0005)
         break;
   }

   printf("-------------------------------------------------------\n");
   printf("Approximate Root X = %lf\n", x);

   return 0;
}