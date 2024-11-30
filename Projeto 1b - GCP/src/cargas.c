// Arquivo para as implementações de funções ref. ao gerenciam. das cargas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cargas.h"

static Carga *inicio = NULL;
static Carga *fim = NULL;

void inicializarFila() {
    inicio = NULL;
    fim = NULL;
}

bool insercao(Carga carga) {
    Carga *nova = (Carga *)malloc(sizeof(Carga));
    if (!nova) return false;

    *nova = carga;
    nova->proximo = NULL;

    if (!inicio) {
        inicio = nova;
        fim = nova;
    } else {
        fim->proximo = nova;
        fim = nova;
    }
    return true;
}

// funcao remocao EU VOU ME MATAR
// funcao buscar
// funcao exibir

void liberarFila() {
    Carga *atual = inicio;
    while (atual) {
        Carga *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    inicio = NULL;
    fim = NULL;
}