#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Pilha-estatica.h"
#define MAXTAM 8


char RetornaOpcao(FILE* arq){
  return  fgetc(arq);
}

char EntradaDecimais(FILE *arq){

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

  } else if(opcao=='e'){

  }else{

  }
  /*PilhaEstatica p;
  iniciaPilhaEstatica(&p);*/

//adquirir dados do TEXTO
  char Linha[10];
  char *result;
  int i;
  i = 1;
  while (!feof(arq))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 10, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf("Linha %d : %s",i,Linha);
    for(int i=0; i<)
      i++;
  }


  return 0;
}
