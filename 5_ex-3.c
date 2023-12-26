// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>

int main()
{
   double a, b, h, ans, i;

   printf("Compute y = e^(-(x^3)/2) :\n");
   printf("------------------------------------\n");

   printf("Enter range [a, b]\n");

   printf("a = ");
   scanf("%lf", &a);

   printf("b = ");
   scanf("%lf", &b);

   printf("h = ");
   scanf("%lf", &h);

   for (i = a; i <= b; i += h)
   {
      ans = exp(-1.0 * (pow(i, 3) / 2));
      printf("x = %lf  and y = %lf\n", i, ans);
   }

   return 0;
}