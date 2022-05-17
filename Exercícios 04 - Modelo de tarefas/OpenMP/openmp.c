// Victor De Marqui 32014287
// Giovanni Vichiatti Mori 32054033
// Guilherme Rodrigues Santos 32012209
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

// using namespace std;
int main()
{
   float serie;
   long long int T = 8223372036854775800;
   #pragma omp 
   {
      float S = 0;
      
      #pragma omp for schedule(dynamic)
      for (int i = 1; i<=T; i++)
      {
         S += (1.0/i);
      }
      #pragma omp critical
      serie += S;
   
   }
   #pragma omp critical
   printf("Serie de Taylor(%lld): %f\n", T, serie);
}