// ** _________BISMILLAHIR RAHMANIR RAHIM_________ ** //
#include <stdio.h>
#include <math.h>

double approx(double n, int x)
{
   x = x - (int)(log10(n) + 1.0);
   double number = (int)(n * pow(10, x) + 0.5);
   return number / pow(10, x);
}

int main()
{
   double n;
   int x;

   printf("Enter number : ");
   scanf("%lf", &n);

   printf("Enter Significant Digit: ");
   scanf("%d", &x);

   double Ea = fabs(approx(n, x) - n);
   double Er = Ea / n;
   double Ep = 100 * Er;

   printf("True Value : %lf\n", n);
   printf("Approximate Value : %lf\n\n", approx(n, x));

   printf("Round OFF Error : %lf\n", fabs(approx(n, x) - n));
   printf("Absolute Error : %lf\n", Ea);
   printf("Relative Error : %E\n", Er);
   printf("Percentage Error : %E\n", Ep);

   return 0;
}