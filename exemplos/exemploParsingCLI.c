/**
 * Programa exemplo para interpretar e obter os parâmetros da 
 * linha de comando. 
 *
 * Nesse programa em particular, o uso é o seguinte:
 *
 * ./programa -y 10 -v 12 -w 11 -t 4  -A arqA.dat -B arqB.dat -C arqC.dat -D arqD.dat
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (int argc, char *argv[]) 
{
  int opt = 0;
  char *nomeArqA = NULL;
  char *nomeArqB = NULL;
  char *nomeArqC = NULL;
  char *nomeArqD = NULL;
  int y, v, w, t;

  while ((opt = getopt(argc, argv, "A:B:C:D:y:v:w:t:")) != -1) 
  {
    switch(opt) {
    case 'A': // Analisa a opcao -A
	nomeArqA = optarg;
	if (nomeArqA == NULL)
	{
	  fprintf(stderr,"Parametro -A <nome> nao foi fornecido.\n");
   	  exit(EXIT_FAILURE);
	}
    	break;

    case 'B': // Analisa a opcao -B
	nomeArqB = optarg;
        if (nomeArqB == NULL)
        {
          fprintf(stderr,"Parametro -B <nome> nao foi fornecido.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 'C': // Analisa a opcao -C
        nomeArqC = optarg;
        if (nomeArqC == NULL)
        {
          fprintf(stderr,"Parametro -C <nome> nao foi fornecido.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 'D': // Analisa a opcao -D
        nomeArqD = optarg;
        if (nomeArqD == NULL)
        {
          fprintf(stderr,"Parametro -D <nome> nao foi fornecido.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 'y':
        y = atoi(optarg);
	if (y<=0)
	{
          fprintf(stderr,"Opcao invalida para  o parametro -y.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 'v':
        v = atoi(optarg);
        if (v<=0)
        {
          fprintf(stderr,"Opcao invalida para  o parametro -v.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 'w':
        w = atoi(optarg);
        if (w<=0)
        {
          fprintf(stderr,"Opcao invalida para  o parametro -w.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case 't':
        t = atoi(optarg);
        if (t<=0)
        {
          fprintf(stderr,"Opcao invalida para  o parametro -t.\n");
          exit(EXIT_FAILURE);
        }
        break;

    case '?': /* Caso o usuario especifique um parametro sem argumento.
               * Por exemplo: $ ./cmd_exe -v
               */
	switch(optopt)
	{
		case 'A':
			fprintf(stderr,"Faltou o argumento para o Arquivo A.\n");
			exit(EXIT_FAILURE);
		case 'B':
                        fprintf(stderr,"Faltou o argumento para o Arquivo B.\n");
			exit(EXIT_FAILURE);
                case 'C':
                        fprintf(stderr,"Faltou o argumento para o Arquivo C.\n");
                        exit(EXIT_FAILURE);
                case 'D':
                        fprintf(stderr,"Faltou o argumento para o Arquivo D.\n");
                        exit(EXIT_FAILURE);
                case 'y':
                        fprintf(stderr,"Faltou o argumento para o parametro y.\n");
                        exit(EXIT_FAILURE);
                case 'v':
                        fprintf(stderr,"Faltou o argumento para o parametro v.\n");
                        exit(EXIT_FAILURE);
                case 'w':
                        fprintf(stderr,"Faltou o argumento para o parametro w.\n");
                        exit(EXIT_FAILURE);
                case 't':
                        fprintf(stderr,"Faltou o argumento para o parametro A\n");
                        exit(EXIT_FAILURE);
		default:
			fprintf(stderr,"Opcao invalida");
			exit(EXIT_FAILURE);
  	}
     } // fim switch
 } // fim while

 // Verifica se alguma das dimensoes esta faltando.
 if (y <= 0 || v <= 0 || w <= 0 || t <= 0)
 {
   fprintf(stderr,"Erro:\n\tUma das dimensoes da matriz esta faltando ou tem valor inconsistente\n");
   exit(EXIT_FAILURE);
 }

 // Verifica se algum nome de arquivo esta faltando.
 if (nomeArqA == NULL || nomeArqB == NULL || nomeArqC == NULL || nomeArqD == NULL)
 {
   fprintf(stderr,"Erro:\n\tUm dos nomes de arquivos esta faltando ou tem valor inconsistente\n");
   exit(EXIT_FAILURE);
 }

 // Imprime os parametros recebidos.
 printf("Parametros recebidos:\n");
 printf("\tArquivo A: %s\n\tArquivo B: %s\n\tArquivo C: %s\n\tArquivo D: %s\n",
	nomeArqA, nomeArqB, nomeArqC, nomeArqD);
 printf("Variáveis y: %d, v:%d, w:%d, t:%d\n", y, v, w, t);

 return 0;
}
