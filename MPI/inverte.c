/**
 * Programa MPI para exemplificar 
 *
 * Autor: Andre Leon S. Gradvohl
 */  
#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Função que inverte os valores de um vetor.
 * @param vetorOriginal Vetor que contem os dados.
 * @param tamanho Tamanho do vetor.
 * @return Vetor invertido.
 */ 
int *inverte(int *vetorOriginal, unsigned int tamanho)
{
  int *vetorInvertido = NULL;
  register int i=0, j=tamanho-1;

  if (tamanho == 0) 
    return NULL;
 
  vetorInvertido = (int *) malloc(sizeof(int) * tamanho);

  if (vetorInvertido == NULL)
  {
    perror("Problemas na alocação do vetor");
    exit(EXIT_FAILURE);
  }

  for (i=0; i<tamanho; i++, j--)
    vetorInvertido[i] = vetorOriginal[j];

  return vetorInvertido;
}

/**
 * Funcao para imprimir os valores de um vetor.
 * @param vetor Vetor que contem os dados.
 * @param tamanho Tamanho do vetor.
 */  
void imprime(int *vetor, unsigned int tamanho)
{
  register int i;

  if (tamanho<1)
    return;
  else if (tamanho == 1)
  {
    printf("{ %d }\n", vetor[0]);
    return;
  }
  else if (tamanho == 2)
  {
    printf("{ %d, %d }\n", vetor[0], vetor[1]);
    return;
  }

  printf("{ %d", vetor[0]);

  for (i=1; i<tamanho-1; i++)
     printf(", %d", vetor[i]);

  printf(", %d }\n", vetor[i]);

  return;
}

int main (int argc, char *argv[])
{
 int quantProcs, rank, destino, fonte, rc, quantidade, tag=1;

 int masterArray = {0, 1, 2, 3, 4}; 
 unsigned int tamanho = 5;
 int *workerArray;
 int *vetorInvertido;

 MPI_Status Stat;

 // Inicializa o MPI
 MPI_Init(&argc,&argv);

 // Obtem a quantidade de processos
 MPI_Comm_size(MPI_COMM_WORLD, &quantProcs);

 // Obtem o rank (identificador) do processo
 MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  
 // Se for o master  
 if (rank == 0)
 {
   destino = 1;
   fonte = 1;

   // Envia o vetor para o worker.
   rc = MPI_Send(vetor, tamanho, MPI_INT, destino, tag, MPI_COMM_WORLD);

   // Aguarda para receber o vetor do worker.
   rc = MPI_Recv(vetor, tamanho, MPI_INT, fonte, tag, MPI_COMM_WORLD, &Stat);

   printf("Imprimindo o vetor invertido: ");
   imprime(vetor, tamanho);
 }
 // Senao, se for o worker 
 else if (rank == 1) 
 {
   dest = 0;
   fonte = 0;
  
   // Aloca memoria para poder receber os dados. 
   if ((workerArray= (int *) malloc(sizeof(int) * tamanho)) == NULL)
   {
     perror("Problemas na alocacao do workerArray");
     exit(EXIT_FAILURE);
   } 

   // Aguarda o envio dos dados pelo master.
   rc = MPI_Recv(workerArray, tamanho, MPI_INT, fonte, tag, MPI_COMM_WORLD, &Stat);

   // Inverte o vetor.
   vetorInvertido = inverte(workerArray, tamanho);
  
   // Envia o vetor invertido para o master.
   rc = MPI_Send(vetorInvertido, tamanho, MPI_INT, dest, tag, MPI_COMM_WORLD);

   // Libera a memoria alocada.
   free(workerArray);
   free(vetorInvertido);
 }

 // Finaliza o MPI
 MPI_Finalize();
 return 0;
}
