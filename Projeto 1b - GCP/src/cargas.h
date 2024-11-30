#ifndef CARGAS_H
#define CARGAS_H

#include <stdbool.h>

typedef struct Carga {
char id[10];
char tipo[50];
float peso;
char prioridade[10];
char desc[100];
struct Carga *prox;
} Carga;

void iniciarFila();
bool insercao(Carga carga);
Carga* remocao();
Carga* buscaCarga(const char *id);
void mostrarCargas();
bool lerCSV(const char *arquivo);
void liberarFila();

#endif