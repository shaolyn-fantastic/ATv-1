#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _GNU_SOURCE
#include<stdbool.h>
#define MAXTAM 8
int i = 0;//criação de variavel global para controlar as linhas dos vetores e matrizes
//-----------------------------------------------------------------Pilha Estatica------------------------------------------------------------------

typedef struct {
  int vetor[MAXTAM];
  int topo;
}PilhaEstatica;
//-----------------------------------------------------------------Pilha Estatica------------------------------------------------------------------


//----------------------------------------------------------------pilha Dinamica------------------------------------------------------------------

typedef struct NoPilha* ptrNoPilha;

//int chave
typedef struct NoPilha{
  int chave;
  ptrNoPilha proximo;//*noPilha Proximo
}NoPilha;
//----------------------------------------------------------------pilha Dinamica------------------------------------------------------------------


typedef struct{
  ptrNoPilha topo;
  int qtde;
}PilhaDinamica;

//cabeçalho das Funções
void iniciaPilhaEstatica(PilhaEstatica *pilha);
void EmpilhaPilhaEstatica(PilhaEstatica *pilha, int x);
int DesempilhaPilhaEstatica(PilhaEstatica* pilha);
bool EstaVaziaPilhaEstatica(PilhaEstatica *pilha);
bool EstaCheiaPilhaEstatica(PilhaEstatica *pilha);
int TamanhoPilhaEstatica(PilhaEstatica* pilha);
void ImprimiPilhaEstatica(PilhaEstatica* pilha);

void IniciaPilhaDinamica(PilhaDinamica* Pilha);
bool estaVaziaPilhaDinamica(PilhaDinamica* Pilha);
int tamanhoPilhaDinamica(PilhaDinamica* Pilha);
void EmpilhaPilhaDinamica(PilhaDinamica* pilha, int x);
void ImprimirPilhaDinamica(PilhaDinamica* pilha);
int DesempilhaPilhaDinamica(PilhaDinamica* pilha);
int ConsultaTopoPilhaDinamica(PilhaDinamica*pilha);
void DestroiPilhaDinamica(PilhaDinamica* pilha);//falta terminar

char RetornaOpcao(FILE* arq){
  return  fgetc(arq);
}

int ConverteDecimalParaBinarioEstatica(int* decimais){

  }//ConvertedecimaParaBinario

 int main(int argc  , char  **argv[]) {
   PilhaEstatica p;

FILE* arq;
arq = fopen(argv[1],"r");
if(arq == NULL ){//checagem de erro da abertura de arquivo de entrada
  printf("Arquivo de entrada Vazio\n");
}

FILE* saida;
saida = fopen(argv[2],"w");
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
    PilhaDinamica pd;
    IniciaPilhaDinamica(&pd);
    int resultado;
    int contador = 0;
    int vetorBinario[20][i];

    while(i>0){

      do {
        resultado= decimais[i]%2;//metodo usado para transforma um decimal em binario
        EmpilhaPilhaDinamica(&pd,resultado);
        decimais[i]=decimais[i]/2;

        contador++;
      }
      while(decimais[i]>0);
      for(contador; contador > 0; contador--){
        vetorBinario [i][contador] = DesempilhaPilhaDinamica(&pd);
        fprintf(saida,"%d",vetorBinario[i][contador]);
      }//for
      fprintf(saida,"\n");
      i--;
    }//while controla o vetor

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
else{printf("opcao errada\n");
}

//adquirir dados do TEXTO
fclose(arq);
fclose(saida);
  return 0;
}//main
//-----------------------------------------------------------------Pilha Estatica------------------------------------------------------------------
//----------------------------------------------------------------Pilha Estatica------------------------------------------------------------------
//--------------------------------------------------------------Pilha Estatica------------------------------------------------------------------
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



//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------pilha Dinamica------------------------------------------------------------------
  //1- definir tipos
  //PilhaDinamica
//-------------------------------------------
//NoPilha

    //-------------------------------------------
//*NoPilha topo
//int quantidade de elementos

  //2- funções//operações
  //inicializa a pilha
    void IniciaPilhaDinamica(PilhaDinamica* Pilha){
    //ponteiro do topo aponta para NULL
    Pilha->topo = NULL;
    //qtde de elementos inicia em 0
    Pilha->qtde = 0;
  }
  //Verifica se a pilha esta vazia
  bool estaVaziaPilhaDinamica(PilhaDinamica* Pilha){
    return(Pilha->topo == NULL);
    //return(PilhaDinamica->qtde == 0); mesma coisa
  }
  // retorna o tamanho da Pilha
  int tamanhoPilhaDinamica(PilhaDinamica* Pilha){
    return(Pilha->qtde);
  }
  //inserir elementos
  void EmpilhaPilhaDinamica(PilhaDinamica* pilha, int x){
    //criar um novo nó
    ptrNoPilha aux;//novo nó
    aux = malloc(sizeof(NoPilha));//alocar memoria

    //copiar o valor inserido no novo nó
    aux->chave = x;

    //proximo do novo nó aponta para quem o topo apontava
    aux->proximo = pilha->topo;

    //topo aponta para o novo nó
    pilha->topo = aux;

    //incremeta a quantidade de elementos
    pilha->qtde++;
  }
  //printar a Pilha
  void ImprimirPilhaDinamica(PilhaDinamica* pilha){
    ptrNoPilha percorre;
    for(percorre = pilha->topo; percorre!= NULL; percorre = percorre->proximo){
        printf("|%d",percorre->chave);
      }
      printf("|\n");
  }

  //remover elemento
  int DesempilhaPilhaDinamica(PilhaDinamica* pilha){
    //vazia == FALSE
    int ret = pilha->topo->chave;
    if(!estaVaziaPilhaDinamica(pilha)){
      //copia o valor que será retornado
      //cria um nó auxiliar
      ptrNoPilha aux;
      // aux aponta para o topo
      aux = pilha->topo;
      //topo aponta para o proximo do topo
      pilha->topo = pilha->topo->proximo;
      //desaloca memoria do aux
      free(aux);
      //decrementa qtde
      pilha->qtde--;
    }else{
      printf("não pode ser removido");
    }
    //retorna o valor para usuario
    return ret;
  }
  //pesquisar elementos(consulta o topo)
int ConsultaTopoPilhaDinamica(PilhaDinamica*pilha){
  int x ;
  return x = pilha->topo->chave;
}
  //destruir a Pilha
  void DestroiPilhaDinamica(PilhaDinamica* pilha){
    free(pilha);
  }
