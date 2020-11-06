#!/bin/bash
# Compara dois arquivos ignorando espacos
#
# Uso: compara <arq1> <arq2>
#
# Autor: Andre Leon S. Gradvohl, Dr.
# gradvohl@ft.unicamp.br
#
# Ultima atualizacao 6/novembro/2020

if [ $# -ne 2 ]; then
	echo "Numero de parametros incorretos"
	echo -e "Uso:\n\t $0 arquivo1 arquivo2\n"
	exit 1
fi

diff --ignore-all-space $1 $2

if [ $? -eq 0 ]; then
	echo "Arquivos iguais (desconsiderando os espacos)"
else
	echo "Arquivos diferentes"
fi

