/**
 * Mais um exemplo simples de OpenMP
 */ 
#include <stdio.h>
#include <omp.h>
#define N 1000

void Faca_algo(int id, int i)
{
  printf("(thd_%d): %d\n",id, i);
  return;
}

int main () 
{ 
  int i,tid;

  // Inicio de uma regiao paralela
  #pragma omp parallel 
  {
    tid = omp_get_thread_num();

    #pragma omp for
    for (i=0; i<N; i++)
	    Faca_algo(tid, i);
  }

  return 0;
}
