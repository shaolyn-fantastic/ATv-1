#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // 1 - 0 > true or false


#define MAXTAM 8
/*definir os tipos
vetor => {elementos}
topo (indexador)*/
typedef struct {
  int vetor[MAXTAM];
  int topo;
}PilhaEstatica;

void iniciaPilhaEstatica(PilhaEstatica *pilha);
void EmpilhaPilhaEstatica(PilhaEstatica *pilha, int x);
bool EstaVaziaPilhaEstatica(PilhaEstatica *pilha);
bool EstaCheiaPilhaEstatica(PilhaEstatica *pilha);
int TamanhoPilhaEstatica(PilhaEstatica* pilha);
void ImprimiPilhaEstatica(PilhaEstatica* pilha);
// E S T R U T U R A -- E S T Á T I C A
//operações de modificação
// 1- inicialização
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
