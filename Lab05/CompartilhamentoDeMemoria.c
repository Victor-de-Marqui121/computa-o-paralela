#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>   

int main(void)
{
    pid_t childpid;
    int shm_id; 
    
    if ((shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT | 0660)) < 0)
    {
        printf("shmget Error\n");
        return -1;
    }
    
    int *sharedVar = (int*) shmat(shm_id, NULL, 0);
    *sharedVar = 1;
    
    if ((childpid = fork()) == 0)
    {     
        printf("Valor inicial da variavel compartilhada: %i\n", *sharedVar);
        *sharedVar += 2; 
        printf("Fork() ChildPid -> %i\n", getpid());
        printf("valor da variavel depois de somar 2 -> *shrd += 2: %i\n",*sharedVar);    
    }
    else
    {
        wait(NULL);     
        *sharedVar *= 4;
        printf("Valor da variavel multiplicado (depois do termino do processo filho) -> *shrd *= 4: %i\n",*sharedVar);    
    }
    
    return 0;
}
