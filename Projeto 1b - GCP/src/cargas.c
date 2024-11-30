// Arquivo para as implementações de funções ref. ao gerenciam. das cargas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cargas.h"

static Carga *inicio = NULL;
static Carga *fim = NULL;

void iniciarFila() {
    inicio = NULL;
    fim = NULL;
}

bool insercao(Carga carga) {
    Carga *nova = (Carga *)malloc(sizeof(Carga));
    if (!nova) return false;

    *nova = carga;
    nova->prox = NULL;

    if (!inicio) {
        inicio = nova;
        fim = nova;
    } else {
        fim->prox = nova;
        fim = nova;
    }
    return true;
}

Carga* removeCarga() {
    if (!inicio) return NULL;

    Carga *atual = inicio;
    Carga *antes = NULL;

    while (atual) {
        if (strcmp(atual->prioridade, "Alta") == 0) break;
        antes = atual;
        atual = atual->prox;
    }

    if (!atual) {
        atual = inicio;
        inicio = inicio->prox;
    } else if (atual == inicio) {
        inicio = atual->prox;
    } else {
        antes->prox = atual->prox;
    }

    if (atual == fim) fim = antes;

    return atual;
}


// funcao buscar
// funcao exibir

void liberarFila() {
    Carga *atual = inicio;
    while (atual) {
        Carga *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    inicio = NULL;
    fim = NULL;
}