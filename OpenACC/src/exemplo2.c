/**
 * Programa exemplo em OpenACC.
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <openacc.h>

/**
 * Funcao para multiplicar um escalar a um numero 
 * e acumular nas posicoes de um vetor.
 */ 
void saxpy(int n, float a, float *x, float *restrict y)
{
    #pragma acc parallel loop
    for (int i = 0; i < n; ++i)
        y[i] = a * x[i] + y[i];
}

void imprime10(float *y)
{
  register unsigned int i;

  printf("{");
  for (i=0; i<9; i++)
    printf("%.2f, ",y[i]);

  printf("%.2f}\n",y[i]);
  return;
}

int main(int argc, char **argv) {
    int N = 1<<20; // 1 million floats
    if (argc > 1)
        N = atoi(argv[1]);
    float *x = (float*)malloc(N * sizeof(float));
    float *y = (float*)malloc(N * sizeof(float));
    for (int i = 0; i < N; ++i) {
        x[i] = 2.0f;
        y[i] = 1.0f;
    }
    printf("Antes: ");
    imprime10(y);

    saxpy(N, 3.0f, x, y);

    printf("Depois: ");
    imprime10(y);
    return 0;
}
