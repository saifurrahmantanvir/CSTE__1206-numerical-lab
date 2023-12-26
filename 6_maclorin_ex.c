// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <conio.h>
#include <ctype.h>

double fac(double n)
{
   if (n <= 1)
      return 1;
   return n * fac(n - 1);
}

int main()
{
   double n, ans, x, i;

   printf("Maclaurin Series e^x : \n");
   printf("----------------------------\n");

   printf("Enter n : ");
   scanf("%lf", &n);

   printf("Enter x : ");
   scanf("%lf", &x);

   for (i = 0; i < n; i++)
   {
      if (i == 0)
         ans = 1;
      else if (i == 1)
         ans += x;
      else
         ans += pow(x, i) / fac(i);

      printf("%.0lfth term %lf\n", i + 1, ans);
   }

   return 0;
}