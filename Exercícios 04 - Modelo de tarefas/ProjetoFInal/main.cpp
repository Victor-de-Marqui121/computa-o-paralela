// Victor De Marqui 32014287
// Giovanni Vichiatti Mori 32054033
// Guilherme Rodrigues Santos 32012209
#include <omp.h>
#include <stdio.h>

int main()
{
   double serie;
   long long int T = 2222222222;
   #pragma omp parallel 
   {
      double S = 0;
      
      #pragma omp for nowait
      for (long long int i = 1; i<=T; i++)
      {
         S += (1.0/i);
      }
      #pragma omp critical
      serie += S;
   
   }
   printf("Serie de Taylor(%lld): %f\n", T, serie);
}
