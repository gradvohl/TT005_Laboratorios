# Arquivo Makefile para compilar os programas exemplo.
#
# Criado por Prof. Andre Leon S. Gradvohl, Dr.
# e-mail: gradvohl@ft.unicamp.br
#
# Ultima versao: Sab 5 Set 2020 15:00:03 -03
#
# Compilador padrao
CC=mpicc
# 
# Arquivos fonte
FONTES=exemploBasico.c
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

programa: ${FONTES}
	$(CC) $(FONTES) -o $(DIRETORIOPROGRAMA)/programa

#Limpeza
clean:
	rm -f $(OBJETOS) $(EXECUTAVEL)
