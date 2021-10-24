#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Pilha-estatica.h"
#define _GNU_SOURCE
#define MAXTAM 8


char RetornaOpcao(FILE* arq){
  return  fgetc(arq);
}

int QuantidadeLinhasArquivo(FILE* arq){
  int contagem = 1;
      int caractere;
      do {
          caractere = fgetc(arq);
          if(caractere == '\n') {
              contagem++;
          }
      } while(caractere != EOF);

return contagem;
}
char EntradaDecimais(FILE *arq){

}

 int main(int argc  , char  **argv[]) {
   typedef struct {
     int vetor[MAXTAM];
     int topo;
   }PilhaEstatica;

FILE* arq;
arq = fopen("entrada02.txt","r");
if(arq == NULL ){
  printf("Arquivo Vazio\n");
}
  char opcao = RetornaOpcao(arq);
  if(opcao == 'd'){

  } else if(opcao=='e'){

  }else{

  }
  int i =0;
  size_t len= 100; // valor arbitrário
    char *linha= malloc(len);
    int decimais[15];
while (getline(&linha, &len, arq) > 0){
  if(i>0){
decimais[i] = atoi(linha);
printf("%d||",decimais[i]);
}i++;
}



  /*PilhaEstatica p;
  iniciaPilhaEstatica(&p);*/

//adquirir dados do TEXTO
fclose(arq);
  return 0;
}
