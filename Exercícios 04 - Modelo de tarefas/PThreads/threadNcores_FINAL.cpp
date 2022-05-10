// Victor De Marqui 32014287
// Giovanni Vichiatti Mori 32054033
// Guilherme Rodrigues Santos 32012209
#include <iostream>
#include <pthread.h>
#include <string>
using namespace std;

#define NUM_THREADS 2       // Mudar Quantia de Threads de acordo com a preferência
#define TAYLOR_SERIES 1000  // Valor da série de Taylor a ser calculado 

struct TaylorData {
    struct {
        int minNum;
        int maxNum;
    } Threads[NUM_THREADS];
    float resultSum;
} TaylorData;

void *sumTaylor(void *id)
{
    int T = TaylorData.Threads[(long)id].maxNum;
    for (float i = TaylorData.Threads[(long)id].minNum; i <= T; i++)
    {
        TaylorData.resultSum += (1 / i);
    }

    pthread_exit(NULL);
}


int main()
{

    if (TAYLOR_SERIES == 1)
    {
        cout << "Taylor(" << TAYLOR_SERIES << "): " << 1 << endl;             
        return 0;
    }

    for (int i = 1; i <= NUM_THREADS; i++)
    {
        TaylorData.Threads[i-1].minNum = (i == 1)? i:(TaylorData.Threads[i-2].maxNum+1); 
        TaylorData.Threads[i-1].maxNum = ((((TAYLOR_SERIES/NUM_THREADS) - 2 + i)*i) > 1000) ? 1000:((TAYLOR_SERIES/NUM_THREADS) - 2 + i)*i;
    }

    pthread_t core1, core2;
    
    pthread_create(&core1, NULL, sumTaylor, (void *)0);
    pthread_create(&core2, NULL, sumTaylor, (void *)1);

    pthread_join(core1, NULL);
    pthread_join(core2, NULL);

    cout << "Taylor(" << TAYLOR_SERIES << "): " << TaylorData.resultSum << endl;

    return 0;
}
