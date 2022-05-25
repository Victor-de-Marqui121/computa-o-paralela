// Victor De Marqui 32014287
// Giovanni Vichiatti Mori 32054033
// Guilherme Rodrigues Santos 32012209
#include <omp.h>
#include <stdio.h>

int main()
{
   long double serie;
   long long int T = 1000000000;

   #pragma omp parallel 
   {
      long double S = 0;
      
      #pragma omp for schedule(dynamic) nowait
      for (int i = 1; i <= T ; i++)
      {
         S += (1.0/i);
      }
      #pragma omp critical
      serie += S; 
   }
   printf("Serie de Taylor(%lld): %Lf\n", T, serie);
}
