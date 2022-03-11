#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct{
    char Name[100];
    int Idade;
    float Altura;
}PESSOA;

void printa(PESSOA *Povo){
  printf("> Nome\t Idade\t Altura <\n");
  for (int i = 0; i < 10; i++){
      printf("%s - %d - %2.2f\n", Povo[i].Name,Povo[i].Idade,Povo[i].Altura );
  }
}

int compara(const void *a, const void *b)
{
  const PESSOA *A = a;
  const PESSOA *B = b;

  if(A->Altura == B->Altura) return 0;
  else if (A->Altura > B->Altura) return -1;
  else return 1;
}

int main(void){
  PESSOA Povo[10];
  FILE *Arq;

  ssize_t read;
  size_t len;
  char *line = NULL;
      
  if ((Arq = fopen("infoSample.txt", "r"))) {
    int index = 0;
    while ((read = getline(&line, &len, Arq)) != -1) 
    {
      char *tempAux = strtok(line, ";");
      strcpy(Povo[index].Name, tempAux);
      
      tempAux = strtok(NULL, ";");
      Povo[index].Idade = atoi(tempAux);
      
      tempAux = strtok(NULL, ";");
      Povo[index].Altura = atof(tempAux);
      
      index++;
    }    
  }

  printf("Antes da Ordenação: \n");
  (printa(Povo));
  qsort (Povo, 10, sizeof(PESSOA), compara);
  printf("\n\nDepois da Ordenação: \n");
  (printa(Povo));
  
  fclose(Arq);
  if (line)
    free(line);
  
  return 0;
}
