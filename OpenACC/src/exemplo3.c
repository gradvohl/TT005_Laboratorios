/**
 * Programa exemplo em OpenACC.
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <openacc.h>

void imprime5x5(float *y)
{
  register unsigned int i,j;

  for (i=0; i<5; i++)
  {
    for (j=0; j<5; j++)
      printf("%.2f, ",y[i*5+j]);
    printf("\n");
  }
  
  return;
}

int main(int argc, char **argv) {
    int N = 1<<20;
    register int i,j;
    register int linhas,colunas;
    double tmp=0;

    linhas = colunas = (int) sqrt(N);

    printf("N: %d\n",N);

    float *x = (float*) malloc(N * sizeof(float));

    printf("Antes:\n");
    imprime5x5(x);

    #pragma acc parallel loop collapse(2) reduction (+:tmp)
    for (i=0; i < linhas; i++)
      for (j = 0; j < colunas; j++) 
      {
	x[i*colunas + j] = 2.0f;
	tmp += x[i*colunas + j];
      }
    
    printf("\nDepois:\n");
    imprime5x5(x);

    printf("\nRedução %.2f\n",tmp);
    return 0;
}
