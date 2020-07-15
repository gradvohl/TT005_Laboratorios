# Arquivo Makefile para compilar os programas exemplo.
#
# Criado por Prof. Andre Leon S. Gradvohl, Dr.
# e-mail: gradvohl@ft.unicamp.br
#
# Ultima versao: Qua 15 Jul 2020 19:43:03 -03
#
# Compilador padrao
CC=gcc
# 
# Parametro para compilacao OpenMP
LIB=-fopenmp
#
# Arquivos fonte
FONTES=exemplo.c
#
# Arquivos objeto
OBJETOS=$(FONTES:.c=.o)
#
# Diretorio onde o programa sera gerado
DIRETORIOPROGRAMA=../bin
#
# Nome do programa
EXECUTAVEL=programa

#Dependencias de Compilacao
all: $(EXECUTAVEL)

programa: exemplo.c
	$(CC) $(LIB) $(FONTES) -o $(DIRETORIOPROGRAMA)/programa

#Limpeza
clean:
	rm -f $(OBJETOS) $(EXECUTAVEL)
