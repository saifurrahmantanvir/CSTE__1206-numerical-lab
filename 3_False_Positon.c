// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>

double F(double x)
{
   return (pow(x, 3) - 2 * x - 5);
}

int main()
{
   double a, b, c = 0, c0;

   printf("Root of X^3 - 2*X - 5 = 0 using False Position Method : \n");
   printf("-------------------------------------------------------\n");

   printf("Enter a : ");
   scanf("%lf", &a);

   printf("Enter b : ");
   scanf("%lf", &b);

   for (int i = 1; i <= 20; i++)
   {
      c0 = c;
      c = (a * F(b) - b * F(a)) / (F(b) - F(a));

      printf("%d. No Approximate Root X%d = %lf\n", i, i, c);

      if (F(c) > 0)
         b = c;
      else
         a = c;

      if (fabs(c0 - c) <= 0.0005)
         break;
   }

   printf("-------------------------------------------------------\n");
   printf("Approximate Root X = %lf\n", c);

   return 0;
}