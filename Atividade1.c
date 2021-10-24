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
char letra ='\n';
  int dec[4];
  int contador = 0;

  for(int i=0; i<4; i++){
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 10, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
      dec[i] = (int)Linha;
      printf("Linha %d : %s\n",i,dec[i]);
    }

    for(int i=0; i<4; i++){
  	// Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 10, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result){
          if(Linha == letra){
          contador++;}
        }

      }
      printf("contador %d\n",contador);


  return 0;
}
