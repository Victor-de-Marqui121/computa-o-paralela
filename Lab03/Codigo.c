// Victor De Marqui     32014287
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int resultado = 1;

int gerar_fatorial(int, int);

int main() {
    pid_t primeiroProcessoFilho, segundoProcessoFilho;

    int numeroDoPrimeiroProcesso = primeiroProcessoFilho, numeroDoSegundoProcesso = segundoProcessoFilho;
    int fd[2], num;
    int meio, fatorial;

    printf( "%s", "Escolha um numero: " );
    scanf( "%d", &num );

    if ( num < 2 ) {
        printf( "\nO Fatorial de %d eh %s\n", num, "1" );
        return EXIT_SUCCESS;
    }
    // Instanciando a comunicação entre os processos
    if ( pipe( fd ) < 0 ) {
        printf("\nErro ao criar o pipe" );
        exit( EXIT_FAILURE );
    }
    
     // Instanciando processos e tratando possivel erro
    if ( (primeiroProcessoFilho = fork()) && (segundoProcessoFilho = fork()) < 0) {
        printf("Erro ao criar o processo\n");
        exit( EXIT_FAILURE  );
    }
       

    // Divide o fatorial em metades, 0 a metade no primero processo e metade até o final no segundo
    // Primeiro processo
    if ( primeiroProcessoFilho == 0 ) {
        printf("\nPrimeiro processo criado com sucesso, id: %d - ParentId: %d\n", getpid(), getppid());
        meio = num / 2;
        fatorial = gerar_fatorial( 1, meio );
        printf("Resultado do primeiro processo: %d\n", fatorial );
        close( fd[0] );
        write( fd[1], &fatorial, sizeof( int ) );
    }
    // Segundo Processo
    else if ( segundoProcessoFilho == 0 ) {
        printf("\nSegundo processo criado com sucesso, id: %d - ParentId: %d\n", getpid(), getppid());
        meio = num / 2 + 1;
        fatorial = gerar_fatorial( meio, num );
        printf("Resultado do segundo processo: %d\n", fatorial );
        close( fd[0] );
        write( fd[1], &fatorial, sizeof( int ) );
    }
    // Pai
    else {
        siginfo_t SignalInfo;
        // waitid(TIPO_DE_ID, NUMERO_DO_PROCESSO_FILHO, NUMERO_PROCESSO_PAI, TIPO_DE_EVENTO)
        waitid(P_PID, numeroDoPrimeiroProcesso, &SignalInfo , WEXITED);
        close( fd[1] ); 
        read( fd[0], &fatorial, sizeof( int ) );
        resultado *= fatorial;
        waitid(P_PID, numeroDoSegundoProcesso, &SignalInfo , WEXITED);
        close( fd[1] );
        read( fd[0], &fatorial, sizeof( int ) );
        resultado *= fatorial;
        printf( "\nFatorial de %d eh %d\n", num, resultado );
    }

    return EXIT_SUCCESS;
}

int gerar_fatorial(int comeco, int num) {

    int produto = 1;

    for ( int i = comeco; i <= num; i++ ) {
        printf("produto = %d * %d \n", produto, i);
        produto *= i;
    }
    
    return produto;
}
