# Arquivo Makefile para compilar os programas que criam 
# matrizes de numeros aleatorios (inteiros ou reais).
#
# Criado por Prof. Andre Leon S. Gradvohl, Dr.
# e-mail: gradvohl@ft.unicamp.br
#
# Ultima versao: Qua 15 Jul 2020 19:43:03 -03
#
# Compilador padrao
CC=gcc
#
# Arquivos fonte
FONTES=generateRandomMatrix.c generateRandomMatrixDouble.c MatrixIO.c
OBJETOS=$(FONTES:.c=.o)
EXECUTAVEL=generateRandomMatrix generateRandomMatrixDouble

#Dependencias de Compilacao
all: $(EXECUTAVEL)

generateRandomMatrix: generateRandomMatrix.o MatrixIO.o
	$(CC) MatrixIO.o generateRandomMatrix.o -o generateRandomMatrix

generateRandomMatrixDouble: generateRandomMatrixDouble.o MatrixIO.o
	$(CC) MatrixIO.o generateRandomMatrixDouble.o -o generateRandomMatrixDouble

MatrixIO.o: MatrixIO.c MatrixIO.h
	$(CC) -c MatrixIO.c

generateRandomMatrix.o: generateRandomMatrix.c MatrixIO.h
	$(CC) -c generateRandomMatrix.c

#Limpeza
clean:
	rm -f $(OBJETOS) $(EXECUTAVEL)
