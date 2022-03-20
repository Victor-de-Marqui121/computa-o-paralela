#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>   

int main(void)
{
    pid_t childpid;
    int shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
    int *sharedVar = (int*)shmat(shm_id, NULL, 0);
  
    *sharedVar = 1;
    childpid = fork()
      
    if (childpid == 0)
    {     
        *sharedVar += 2; 
        printf("Variable Value After Adding 2 -> *shrd += 2: %i\n", *sharedVar);    
    }
    else
    {
        wait(NULL);     
        *sharedVar *= 4;
        printf("Variable Value multiplied (after child process terminates) -> *shrd *= 4: %i\n", *sharedVar);    
    }
    return 0;
}
