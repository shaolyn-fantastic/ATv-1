#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Pilha-estatica.h"
#define MAXTAM 8


char RetornaOpcao(FILE* arq){
  return  fgetc(arq);
}


 int main(int argc  , char  **argv[]) {
   typedef struct {
     int vetor[MAXTAM];
     int topo;
   }PilhaEstatica;

FILE* arq;
arq = fopen("entrada01.txt","r");
if(arq == NULL ){
  printf("Arquivo Vazio\n");
}
  char opcao = RetornaOpcao(arq);
  if(opcao == 'd'){
    printf("pilha Dinamica\n");
  } else if(opcao=='e'){
    printf("pilha Estatica \n");
  }else{
    printf("Entrada invalida \n");
  }
  PilhaEstatica p;
  iniciaPilhaEstatica(&p);


  return 0;
}
