#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _GNU_SOURCE
#include<stdbool.h>
#define MAXTAM 8
int i = 0;//criação de variavel global para controlar as linhas dos vetores e matrizes
typedef struct {
  int vetor[MAXTAM];
  int topo;
}PilhaEstatica;

void iniciaPilhaEstatica(PilhaEstatica *pilha);
void EmpilhaPilhaEstatica(PilhaEstatica *pilha, int x);
int DesempilhaPilhaEstatica(PilhaEstatica* pilha);
bool EstaVaziaPilhaEstatica(PilhaEstatica *pilha);
bool EstaCheiaPilhaEstatica(PilhaEstatica *pilha);
int TamanhoPilhaEstatica(PilhaEstatica* pilha);
void ImprimiPilhaEstatica(PilhaEstatica* pilha);

char RetornaOpcao(FILE* arq){
  return  fgetc(arq);
}

int ConverteDecimalParaBinarioEstatica(int* decimais){

  }//ConvertedecimaParaBinario

 int main(int argc  , char  **argv[]) {
   PilhaEstatica p;

FILE* arq;
arq = fopen("entrada02.txt","r");
if(arq == NULL ){//checagem de erro da abertura de arquivo de entrada
  printf("Arquivo de entrada Vazio\n");
}

FILE* saida;
saida = fopen("saida.txt","w");
if(arq == NULL ){//checagem de erro da abertura de arquivo de entrada
  printf("Erro ao abrir arquivo de saida\n");
}

char opcao = RetornaOpcao(arq);

//int i =0;
size_t len= ftell(arq); // define o tamanho do arquivo
char *linha= malloc(len);//alocação dinamica
int decimais[15];
while (getline(&linha, &len, arq) > 0){//extração linha a linha do arquivo
  if(i>0){//para não pegar a primeira linha
    decimais[i] = atoi(linha);//converte char em inteiro, para passar para o vetor
    //printf("%d||",decimais[i]);

  }i++;
}
i--;//menos um, por causa da primeira linha
  if(opcao == 'd'){


  } //if dinamica
    else if(opcao == 'e'){
      PilhaEstatica p;
      int resultado;
      int contador =0;
      iniciaPilhaEstatica(&p);
      int vetorBinario[MAXTAM][i];

      while(i>0){

        do {
          resultado= decimais[i]%2;//metodo usado para transforma um decimal em binario
          EmpilhaPilhaEstatica(&p,resultado);
          decimais[i]=decimais[i]/2;
          //ImprimiPilhaEstatica(&p);
          contador++;
        }
        while(decimais[i]>0);
        for(contador; contador > 0; contador--){
          vetorBinario [i][contador] = DesempilhaPilhaEstatica(&p);
          fprintf(saida,"%d",vetorBinario[i][contador]);
        }//for
        fprintf(saida,"\n");
        i--;
      }//while controla o vetor



  }//if estatica
else{printf("opção errada\n");
}

//adquirir dados do TEXTO
fclose(arq);
fclose(saida);
  return 0;
}//main
//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------
void iniciaPilhaEstatica(PilhaEstatica *pilha){
  pilha->topo = 0;//primeira posição na inserção na pilha é a posição 0 do vetor
  }

 //2-inserção(empilhar/push)
 void EmpilhaPilhaEstatica(PilhaEstatica *pilha, int x){
   //vazia-> pode inserir
   //cheia -> NÃO incrementa
//se a pilha não estiver cheia
  if(EstaCheiaPilhaEstatica(pilha) == false){
   pilha->vetor[pilha->topo] = x;//atribui o x no vetor na posição do topo
   //incrementar topo
   pilha->topo++;
//se estiver cheia
}else{
printf("fez cagada nao podera ser incrementado\n");
 }
}
//3 -remoção(desempliha/pop)
int DesempilhaPilhaEstatica(PilhaEstatica* pilha){
//cria um auxiliar para salvar o ultimo valor valido
int aux;
aux = pilha->vetor[pilha->topo-1];
//se a pilha estiver vazia
if(EstaVaziaPilhaEstatica(pilha) == false){
  //decrementa o topo
  pilha->topo--;
  //se não (warning)
}else{
  printf("a pilha ja esta vazia\n");
}
//retorna o valor do topo
return (aux);
}

// 4 - pesquisa (consulta)


//operações adicionais (consulta)
 //5 - está vazia
bool EstaVaziaPilhaEstatica(PilhaEstatica *pilha){
return (pilha->topo == 0);
}

//6 - está cheia
bool EstaCheiaPilhaEstatica(PilhaEstatica *pilha){
  return(pilha->topo == MAXTAM);
}

 //7 - quantidade de elementos da estrutura
int TamanhoPilhaEstatica(PilhaEstatica* pilha){
  return (pilha->topo);
}

 //8 - imprimir a estrutura
void ImprimiPilhaEstatica(PilhaEstatica* pilha){
  //pilha->vetor //pilha->topo
  printf("Pilha = {");
  for(int i=0; i<pilha->topo; i++){
    printf("%d|",pilha->vetor[i]);
  }
  printf("}\n");
}
