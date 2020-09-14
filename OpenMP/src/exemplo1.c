/**
 * Exemplo simples de OpenMP.
 */ 
#include <omp.h> // Cabecalho para o OpenMP
#include <stdio.h> 
#include <stdlib.h> 
  
int main(int argc, char* argv[]) 
{ 
    // Inicio de uma regiao paralela
    #pragma omp parallel 
    { 
  
        printf("Ola mundo... do thread = %d\n", 
               omp_get_thread_num()); 
    } 
    // Fim da regiao paralela
} 
