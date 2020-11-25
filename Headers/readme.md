# Criação de Headers em C
---
Criar os próprios headers é uma forma de deixar o código menos confuso, mais organizado e com menos escrita, pois é possível declarar neles constantes, variáveis globais, structs, funções, etc;

### **No exemplo**: 
* É criado um arquivo princípal, onde fica o código principal do programa, nomeado como **_"main.c"_**
* É criado um arquivo header.h, onde será declarado as funções e uma constante, nomeado como **_"calculos.h"_**
* É criado um código fonte para as declarações feitas no header, nomeado como **_"calculos.c"_**


### **Como compilar**:

* Usando o **gcc**, primeiramente precisamos compilar o arquivo **main.c** e gerar o **objeto (.o)**:
    - **`gcc -c main.c -o main.o`**

* Depois precisamos compilar o arquivo **calculos.c**:
    - **`gcc -c calculos.c -o calculos.o`**
* Por ultimo é preciso fazer o link entre os objetos em um único programa:
    - **`gcc main.o calculos.o -o "nome_do_programa_sem_as_aspas"`**
