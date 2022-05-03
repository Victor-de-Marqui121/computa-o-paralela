#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int thread_count;
void *Hello (void *rank);

int
main (int argc, char *argv[])
{
  long thread;
  pthread_t *thread_handles;

  thread_count = strtol (argv[1], NULL, 10);
  thread_handles = malloc (thread_count * sizeof (pthread_t));

  for (thread = 0; thread < thread_count; thread++)
    {
      pthread_create (&thread_handles[thread], NULL, Hello, (void *) thread);
    }

  printf ("Hello from the main thread\n");

  for (thread = 0; thread < thread_count; thread++)
    {
      pthread_join (thread_handles[thread], NULL);
    }

  free (thread_handles);
  return 0;
}

void *
Hello (void *rank)
{
  long my_rank = (long) rank;
  double factor;
  long long i, my_n = 4/thread_count, my_first_i = my_n*my_rank, my_last_i = my_first_i+my_n;
  float sum;	
  factor = 1.0;
  
  for (i = my_first_i; i < my_last_i; i++){
	  sum += (factor/i);
	  printf("%f\n", sum);
  }
  
  return NULL;
}
