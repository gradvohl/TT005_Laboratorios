/**
 * Mais um exemplo simples de OpenMP
 */ 
#include <stdio.h>
#include <omp.h>

int main () 
{ 
  int nthreads, tid;

  // Inicio de uma regiao paralela com 4 threads e 
  // variaveis privadas nthreads e tid.
  #pragma omp parallel num_threads(4) private(nthreads, tid) 
  {
    tid = omp_get_thread_num();
    printf("Ola mundo do thread = %d\n", tid);
    if (tid == 0){
        nthreads = omp_get_num_threads();
        printf("Numero de threads = %d\n", nthreads);
    }
   }
}
