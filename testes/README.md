#Diretório de Testes
Nesse diretório estão alguns arquivos que podem ser utilizados como testes para os laboratórios. Aqui estão cinco arquivos:
- `arqA_997x981.dat`: Arquivo com a primeira matriz (matriz A). As dimensões dessa matriz são 997 linhas por 981 colunas.
- `arqB_981x991.dat`: Arquivo com a segunda matriz (matriz B). As dimensões dessa matriz são 981 linhas por 991 colunas.
- `arqC_991x1.dat`: Arquivo com a terceira matriz (matriz C). As dimensões dessa matriz são 991 linhas por 1 coluna.
- `resposta.dat`: Arquivo com a resposta para a operação D = (A x B) x C.

- `compara.sh`: *Script* para comparação dos arquivo de resposta com o arquivo gerado pelo seu programa. Para executar esse script, utilize a seguinte linha de comando:
`./compara.sh resposta.dat seuArquivoResposta.dat`

A propósito, nesse exemplo o resultado da operação de redução da matriz D retornará `-4129376.518921`.
