/**
 * Exemplo para ilustrar as rotinas nao-bloqueantes.
 * Adaptado de https://computing.llnl.gov/tutorials/mpi
 */
#include "mpi.h" 
#include <stdio.h> 
#define TAMANHO 4

int main( int argc, char **argv)
{ 
 int numtasks, rank, sendcount, recvcount, source;
 float sendbuf[TAMANHO][TAMANHO] = {
   {1.0, 2.0, 3.0, 4.0},
   {5.0, 6.0, 7.0, 8.0},
   {9.0, 10.0, 11.0, 12.0},
   {13.0, 14.0, 15.0, 16.0}  };
 float recvbuf[TAMANHO];

 MPI_Init(&argc,&argv);
 MPI_Comm_rank(MPI_COMM_WORLD, &rank);
 MPI_Comm_size(MPI_COMM_WORLD, &numtasks);

 if (numtasks == TAMANHO) 
 {
  source = 1;
  sendcount = TAMANHO;
  recvcount = TAMANHO;

  /* Note que apenas o processo source= 1 envia,
   * mas todos os processos (inclusive o source=1) recebem
   */ 
  MPI_Scatter(sendbuf,sendcount,MPI_FLOAT,recvbuf,recvcount,
             MPI_FLOAT,source,MPI_COMM_WORLD);

  printf("rank= %d  Resultado: %f %f %f %f\n",rank,recvbuf[0],
           recvbuf[1],recvbuf[2],recvbuf[3]);
 }
 else
    printf("O programa requer %d processadores.\n",TAMANHO);

 MPI_Finalize();
}
