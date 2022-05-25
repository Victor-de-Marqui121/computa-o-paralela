// Victor De Marqui 32014287
// Giovanni Vichiatti Mori 32054033
// Guilherme Rodrigues Santos 32012209
#include <iostream>
#include "pthread.h"
#include <string>

using namespace std;

#define NUM_THREADS 2
float serie; 
void *Thread1(void *id)
{
    long long T = 1111111110;
    // 4111686018427387900
    double S = 0;

    for (double i = 1; i <= T; i++)
    {
        S += (1 / i);
    }
    serie += S;
    pthread_exit(NULL);
}

void *Thread2(void *id)
{
    long long T = 2222222222;
    double S = 0;

    for (double i = 1111111111; i <= T; i++)
    {
        S += (1 / i);
    }
    serie += S;
    pthread_exit(NULL);
}

int main()
{
    long long int T = 2222222222, i;
    pthread_t core1, core2;
    pthread_create(&core1, NULL, Thread1, (void *)&i);
    pthread_create(&core2, NULL, Thread2, (void *)&i);
    pthread_join(core1, NULL);
    pthread_join(core2, NULL);

    cout << "Taylor(" << T << ") = " << serie << endl;

    return 0;
}
