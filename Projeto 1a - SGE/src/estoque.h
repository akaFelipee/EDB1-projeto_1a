//Declarações das funções e estruturas relacionadas ao estoque

#ifndef ESTOQUE_H
#define ESTOQUE_H

typedef struct {
    int codigo;
    char nome[100];
    int quantidade;
    float preco;
} Produto;

typedef struct {
    Produto *produtos;
    int capacidade;
    int tamanho;
} Estoque;

void inicializarEstoque(Estoque *estoque, int capacidadeInicial);
void liberarEstoque(Estoque *estoque);
void inserirProdutoMenu(Estoque *estoque); 
void removerProdutoMenu(Estoque *estoque); // em processo
// declarar funçao pra busca de produto
// declarar funçao pra att de produto
// declarar funçao pra listar produto

#endif
