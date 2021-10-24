#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Pilha-estatica.h"
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
arq = fopen("entrada04.txt","r");
if(arq == NULL ){
  printf("Arquivo Vazio\n");
}
  char opcao = RetornaOpcao(arq);
  if(opcao == 'd'){

  } else if(opcao=='e'){

  }else{

  }
char caractere;
int vetordecimais[6];
for(int i=0; i<6; i++){
    caractere = fgetc(arq);
    vetordecimais[i] = caractere -'0';//converte char em int
    if(i%2 != 0){
    printf("vetor | %d |",vetordecimais[i]);
}
  }




  /*PilhaEstatica p;
  iniciaPilhaEstatica(&p);*/

//adquirir dados do TEXTO
fclose(arq);
  return 0;
}
