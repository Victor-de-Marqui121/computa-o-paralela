#include <stdio.h>

int main() {
  long long int T = 2222222222;
  double S = 0;
	
	for(long long int i = 1; i <= T; i++)
	{
      //if (i%10000 == 1)cout << "S = " << S << " + " << (1/i) << " = " << (S + (1/i)) << endl;
		S += (1/(float)i);
	}
	printf("Serie de Taylor(%lld): %f", T, S);
	return 0;
}
