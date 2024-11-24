// Arquivo para as implementações de funções ref. ao gerenciam. do estoque

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

void inicializarEstoque(Estoque *estoque, int capacidadeInicial) {
    estoque->produtos = malloc(capacidadeInicial * sizeof(Produto)); // aloca memoria inicialmente
    estoque->capacidade = capacidadeInicial;
    estoque->tamanho = 0;
}

void liberarEstoque(Estoque *estoque) {
    free(estoque->produtos);
}

// inserir
void inserirProdutoMenu(Estoque *estoque) {
    Produto produto;
    printf("Codigo: ");
    scanf("%d", &produto.codigo);
    printf("Nome: ");
    scanf(" %[^\n]", produto.nome);
    printf("Quantidade: ");
    scanf("%d", &produto.quantidade);
    printf("Preco: ");
    scanf("%f", &produto.preco);

    if (estoque->tamanho == estoque->capacidade) {
        redimensionarEstoque(estoque);
    }
    estoque->produtos[estoque->tamanho++] = produto;
}

// remover

// buscar