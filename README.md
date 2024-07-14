# Fundamentos Matemáticos da Computação I - Unidade 2

Este repositório contém dois arquivos em C++ referentes à Unidade 2 da disciplina de Fundamentos Matemáticos da Computação I.

## Arquivos

1. `fibonacci.cpp`: Implementação do cálculo da sequência de Fibonacci.
2. `fatorial.cpp`: Implementação do cálculo do fatorial de um número.

## Pré-requisitos

Antes de compilar e executar os programas, certifique-se de ter os seguintes pré-requisitos instalados no seu sistema:

- **Compilador C++**: Você precisará de um compilador C++ instalado. Um dos compiladores mais comuns é o `g++` para sistemas Unix-like (Linux, macOS) ou o `MinGW` para Windows. Certifique-se de que o compilador está acessível pelo terminal ou prompt de comando.

- **Terminal ou Prompt de Comando**: Você deve ter acesso a um terminal ou prompt de comando para executar os comandos de compilação e execução.

### Instalação dos Pré-requisitos

#### Linux (Ubuntu):

1. **Instalar g++**: Se ainda não tiver o `g++` instalado, você pode instalá-lo utilizando o gerenciador de pacotes `apt-get`. Abra o terminal e execute:

   ```bash
   sudo apt-get update
   sudo apt-get install g++
   ```

2. **Verificar a Instalação**: Para verificar se o `g++` está corretamente instalado, execute:

   ```bash
   g++ --version
   ```

#### macOS:

1. **Instalar Xcode Command Line Tools**: Se ainda não tiver o `g++` instalado, você pode instalá-lo executando o seguinte comando no terminal:

   ```bash
   xcode-select --install
   ```

2. **Verificar a Instalação**: Para verificar se o `g++` está corretamente instalado, execute:

   ```bash
   g++ --version
   ```

#### Windows:

1. **Instalar MinGW**: Para compilar programas C++ no Windows, você pode usar o MinGW (Minimalist GNU for Windows).

   - Baixe o instalador do MinGW [aqui](https://osdn.net/projects/mingw/releases/).
   - Siga as instruções de instalação do MinGW.

2. **Configurar Variáveis de Ambiente**: Após a instalação, adicione o caminho do diretório `bin` do MinGW às variáveis de ambiente do sistema.

   - Abra o `Painel de Controle` > `Sistema e Segurança` > `Sistema` > `Configurações avançadas do sistema`.
   - Clique em `Variáveis de Ambiente`.
   - Na seção `Variáveis do Sistema`, encontre a variável `Path` e adicione o caminho para o diretório `bin` do MinGW (geralmente `C:\MinGW\bin`).

3. **Verificar a Instalação**: Para verificar se o MinGW está corretamente configurado, abra o prompt de comando e execute:

   ```bash
   g++ --version
   ```

## Como Compilar e Executar

1. **Compilação**:

   Para compilar cada programa, abra o terminal ou prompt de comando e navegue até o diretório onde os arquivos `fibonacci.cpp` e `fatorial.cpp` estão localizados.

   - Para compilar o programa de Fibonacci (`fibonacci.cpp`), execute o seguinte comando:

     ```bash
     g++ fibonacci.cpp -o fibonacci
     ```

   - Para compilar o programa de fatorial (`fatorial.cpp`), execute o seguinte comando:

     ```bash
     g++ fatorial.cpp -o fatorial
     ```

   Isso irá gerar os executáveis `fibonacci` e `fatorial` no mesmo diretório.

2. **Execução**:

   - Após compilar, você pode executar cada programa digitando o nome do executável no terminal ou prompt de comando.

     - Para executar o programa de Fibonacci, use o comando:

       ```bash
       ./fibonacci
       ```

     - Para executar o programa de fatorial, use o comando:

       ```bash
       ./fatorial
       ```

   Siga as instruções apresentadas na linha de comando para inserir os parâmetros necessários (por exemplo, o número para calcular o fatorial).
