# Diretório exemplos
Nesse diretório estão os códigos fontes para alguns programas exemplo que podem auxiliar neste e nos demais laboratórios (trabalhos).

Além dos arquivos arquivos fontes com códigos em C, há também um ``makefile`` para compilar esses arquivos. Sugere-se que os alunos observem os códigos fontes, bem como o arquivo ``makefile``, de modo que possam usar estratégias parecidas para implementar as soluções para o trabalho.

## Programas nesse diretório

Nesse diretório estão os códigos fontes para programas que podem servir como base para a criação dos programas dos estudantes. Um deles, ``exemploParsingCLI.c``, trata dos parâmetros da linha de comando, exatamente conforme indicado na especificação do laboratório. 

O arquivo makefile contém as instruções para compilar e gerar os programas. Para compilar o programa basta executar o comando ``make``. Depois de compilado, execute o programa conforme a linha de comando a seguir e veja o resultado. Substitua o que aparece entre parênteses angulares (``<`` e ``>``) por valores que você escolher.


```
./programa -y <numero de linhas> -v <numero de colunas> -w <numero de colunas>   -A <arquivo A> -B <arquivo B> -C <arquivo C> -D <arquivo D> -t <numero de threads>
```
