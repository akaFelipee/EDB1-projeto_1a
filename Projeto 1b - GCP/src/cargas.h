//Declarações das funções e estruturas relacionadas às cargas

#ifndef CARGAS_H
#define CARGAS_H
#include <stdbool.h> // para var. booleanas

typedef struct Carga {
    char id[4];
    char tipo[50];
    float peso;
    char prioridade[10];
    char descricao[100];
    struct Carga prox;
} Carga;

void inicializarFila(); // FEITO
bool insercao(Carga carga); // FEITO
Carga remocao(); // FEITO
Carga* busca(const char id); 
void exibe();
bool lerCSV(const chararquivo);
void liberarFila(); // FEITO

#endif