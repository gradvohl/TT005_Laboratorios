#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[]) 
{
 int  numtasks, rank, len, rc; 
 char hostname[MPI_MAX_PROCESSOR_NAME];

 // Inicializa o MPI  
 MPI_Init(&argc,&argv);

 // Obtem o numero de tarefas
 MPI_Comm_size(MPI_COMM_WORLD,&numtasks);

 // Obtem meu rank (identificador do processo)
 MPI_Comm_rank(MPI_COMM_WORLD,&rank);

 // Obtem o nome do processador (nome da maquina onde o processo sera executado)
 MPI_Get_processor_name(hostname, &len);
 printf ("Numero de tarefas = %d Meu rank= %d Rodando em %s\n", numtasks,rank,hostname);

 // Finaliza o MPI  
 MPI_Finalize();
}
