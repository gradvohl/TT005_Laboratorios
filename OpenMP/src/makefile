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
OBJETOS=$(FONTES:.c=.o)
EXECUTAVEL=programa

#Dependencias de Compilacao
all: $(EXECUTAVEL)

programa: exemplo.c
	$(CC) $(LIB) $(FONTES) -o programa

#Limpeza
clean:
	rm -f $(OBJETOS) $(EXECUTAVEL)
