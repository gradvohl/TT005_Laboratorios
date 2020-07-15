# Laboratórios
Este repositório contém as informações  necessárias para a realização dos laboratórios da disciplina TT005 -- Tópicos em Telecomunicações -- Programação de Alto Desempenho. A estrutura deste repositório deve ser usada como base para a entrega dos trabalhos da disciplina.

## Estrutura básica do repositório
O repositório está dividido em três diretórios principais:
- :file_folder: OpenMP: diretório para o 1º trabalho, sobre o OpenMP.
- :file_folder: MPI: diretório para o 2º trabalho, sobre o MPI.
- :file_folder: OpenACC: diretório para o 3º trabalho sobre o OpenACC.

Além dos diretórios principais, há outros dois diretórios auxiliares descritos a seguir:
- :file_folder: aux: arquivos e programas auxiliares.
- :file_folder: exemplos: alguns arquivos e programas exemplos para ajudar aos alunos.

Cada um dos diretórios principais, possui a seguinte estrutura

A estrutura base de cada diretório principal é formada pelos seguintes diretórios internos:
- :file_folder: src: código fonte do projeto.
- :file_folder: bin: código fonte compilado.

**Observações:** 
- O relatório no formato ``.pdf`` referente a cada laboratório deve estar no diretório raiz de cada diretório principal.
- As equipes podem aterar e adicionar informações dentro desses diretórios principais, mas os diretórios src e bin devem ser preservados.
- As equipes devem se assegurar que os diretórios **não contenham** os arquivos com as matrizes, pois ao clonar ou copiar os repositórios, as matrizes podem ocupar bastante espaço. O professor utilizará as próprias matrizes para a avaliação.

## Informações necessárias no repositório
Cada equipe deve providenciar, no diretório raiz do repositório, um arquivo ``README.md`` com as seguintes informações:

- Nome da equipe
- Nomes, matrículas e emails dos componentes da equipe.

**Observação**:
- Cuidado para não sobrescrever este arquivo ``README.md`` e perder as instruções originais. Renomeie este arquivo para ``instrucoes.md`` antes de criar o ``README.md`` com as infromações do grupo.

## Avaliação do trabalho
O trabalho será avaliado seguindo os passos a seguir:
1. O professor vai clonar o repositório na máquina local.
2. Em seguida, vai entrar no diretório ``<laboratório>/src`` e executar o comando ``makefile``.
	- O comando makefile deverá gerar o arquivo executável que será utilizado para rodar o programa no diretório ``<laboratorio>/bin``.
3. Depois, o professor executará o programa com seus próprios parâmetros, que estarão de acordo com o proposto no trabalho.
4. O arquivo de saída do programa da equipe será comparada com o arquivo de saída gerado pelo  programa de referência do professor com o comando ``diff`` do Linux :penguin:.
	- Se o programa ``diff`` não apontar diferenças, então considera-se que o programa está correto. Caso haja diferenças significativas, o programa está errado e a equipe perderá os pontos desse trabalho.
5. Se estiver tudo certo com o programa, o código e o relatório serão analisados para verificar se está tudo conforme o especificado no trabalho e se os resultados são coerentes. Em seguida, uma nota será atribuída para esse trabalho.
