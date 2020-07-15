# Laboratório de OpenMP
Este repositório contém as informações  necessárias para a realização do laboratório sobre OpenMP na disciplina TT005 -- Tópicos em Telecomunicações -- Programação de Alto Desempenho. A estrutura deste repositório deve ser usada como base para a entrega do 1º trabalho da disciplina.

## Estrutura básica do repositório
Os grupos podem aterar e adicionar informações nesse repositório, mas a estrutura base de diretórios a seguir deve ser mantida. A estrutura é a seguinte:
- :file_folder: src: código fonte do projeto.
- :file_folder: bin: código fonte compilado.
- :file_folder: aux: arquivos e programas auxiliares.

## Informações necessárias no repositório
Cada grupo deve providenciar, no diretório principal do repositório, um arquivo ``Readme.md`` com as seguintes informações:

- Nome do grupo
- Nomes, matrículas e emails dos componentes do grupo.

## Avaliação do trabalho
O trabalho será avaliado seguindo os passos a seguir:
1. O professor vai clonar o repositório na máquina local.
2. Em seguida, vai entrar no diretório ``<seu_repositório>/src`` e executar o comando ``makefile``.
	- O comando makefile deverá gerar o arquivo executável que será utilizado para rodar o programa.
3. Depois, o professor executará o programa com seus próprios parâmetros, que estarão de acordo com o proposto no trabalho.
4. O arquivo de saída do programa do grupo será comparada com o arquivo de saída gerado pelo  programa de referência do professor com o comando ``diff`` do Linux :penguin:.
	- Se o programa ``diff`` não apontar diferenças, então considera-se que o programa está correto. Caso haja diferenças significativas, o programa está errado e a equipe perderá os pontos desse trabalho.
5. Se estiver tudo certo com o programa, o código e o relatório serão analisados para verificar se está tudo conforme o especificado no trabalho e se os resultados são coerentes. Em seguida, uma nota será atribuída para esse trabalho.
