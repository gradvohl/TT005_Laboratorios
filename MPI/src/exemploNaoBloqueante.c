/**
 * Exemplo para ilustrar as rotinas nao-bloqueantes.
 * Adaptado de https://computing.llnl.gov/tutorials/mpi
 */
#include "mpi.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int numtasks, rank, next, prev, buf[2], tag1=1, tag2=2;
  MPI_Request reqs[4]; // Vetor necessario para chamadas nao bloqueantes
  MPI_Status stats[4]; // Vetor necessario para a rotina Waitall 

  MPI_Init(&argc,&argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  srand(time(NULL)); 
   
  // Determina os vizinhos a esquerda e a direita 
  prev = rank-1;
  next = rank+1;
  if (rank == 0)
    prev = numtasks - 1;

  if (rank == (numtasks - 1))  
    next = 0;

  buf[0] = buf[1] = rank;

  // Recebe e Envia mensagens nao bloqueantes para os vizinhos
  MPI_Irecv(&buf[0], 1, MPI_INT, prev, tag1, MPI_COMM_WORLD, &reqs[0]);
  MPI_Irecv(&buf[1], 1, MPI_INT, next, tag2, MPI_COMM_WORLD, &reqs[1]);

  MPI_Isend(&rank, 1, MPI_INT, prev, tag2, MPI_COMM_WORLD, &reqs[2]);
  MPI_Isend(&rank, 1, MPI_INT, next, tag1, MPI_COMM_WORLD, &reqs[3]);
  
  // Executa algum trabalho enquanto as mensagens nao chegam
  sleep(rand()%3);

  // Espera ate que as operacores nao bloqueantes terminem. 
  MPI_Waitall(4, reqs, stats);
  
  printf("Sou o processo: %d. Da esquerda, recebi: %d, da direita, recebi %d\n",
	  rank, prev, next);

  MPI_Finalize();
  return 0;
}
