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
# Arquivos fonte
FONTES=exemploParsingCLI.c
OBJETOS=$(FONTES:.c=.o)
EXECUTAVEL=programa

#Dependencias de Compilacao
all: $(EXECUTAVEL)

programa: exemploParsingCLI.o
	$(CC) exemploParsingCLI.o -o programa

exemploParsingCLI.o: exemploParsingCLI.c
	$(CC) -c exemploParsingCLI.c

#Limpeza
clean:
	rm -f $(OBJETOS) $(EXECUTAVEL)
