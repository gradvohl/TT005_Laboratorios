/**
 * Um exemplo de reducao no OpenMP
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
#define MAX 1000

int main () 
{ 
  int i,tid;
  float A[MAX];
  double media = 0.;

  srand(time(NULL));

  // Regiao paralela para preenchimento do vetor A
  #pragma omp parallel for
  for (i=0; i<MAX; i++)
	  A[i] = (rand()%3)/.275;
  
  #pragma omp parallel for reduction (+:media)
  for (i=0; i<MAX; i++)
    media +=A[i];

  printf("Media: %f\n", media/MAX);

  return 0;
}
