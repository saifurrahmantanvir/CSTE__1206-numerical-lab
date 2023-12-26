// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>

double F(double x)
{
   return (pow(x, 3) - 2 * x - 5);
}

double F1(double x)
{
   return 3 * pow(x, 2) - 2;
}

int main()
{
   double a, b, x, x0;

   printf("Root of X^3 - 2*X - 5 = 0 using Newton's Rapshon Method : \n");
   printf("-------------------------------------------------------\n");

   printf("Enter a : ");
   scanf("%lf", &a);

   printf("Enter b : ");
   scanf("%lf", &b);

   if (fabs(F(a)) < fabs(F(b)))
      x0 = a;
   else
      x0 = b;

   for (int i = 1; i <= 20; i++)
   {
      x = x0 - (F(x0) / F1(x0));
      printf("%d. No Approximate Root X%d = %lf\n", i, i, x);

      if (fabs(x0 - x) <= 0.0005)
         break;
      x0 = x;
   }

   printf("---------------------------------------------------------\n");
   printf("Approximate Root X = %lf\n", x);

   return 0;
}
