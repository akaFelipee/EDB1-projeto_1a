//Declarações das funções e estruturas relacionadas às cargas

#ifndef CARGAS_H
#define CARGAS_H

typedef struct {
    int codigo;
    char nome[50];
    int peso;
    float prioridade;
} Produto;

typedef struct {
    Produto *produtos;
    int tamanho;
    int capacidade;
} Estoque;



#endif