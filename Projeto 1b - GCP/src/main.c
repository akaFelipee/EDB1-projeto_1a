#include <stdio.h>
#include "cargas.h"
#include "persistencia.h"

int main(int argc, char const *argv[])
{
    Carga carga;
    Produto p;

    carregarCargas(&carga, "./data/cargas.csv");

    int opcao;
    do {
        printf("\n1. Inserir produto\n");
        printf("2. Remover produto\n");
        printf("3. Buscar produto\n");
        printf("4. Listar produtos\n");
        printf("5. Salvar alteracoes\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Produto p;
                printf("Digite o codigo da carga: ");
                scanf("%d", &p.codigo);
                printf("Digite o nome da carga: ");
                scanf("%49s", p.nome);  // Garante que não ultrapasse o limite de 49 caracteres + null-terminator
                printf("Digite o peso da carga: ");
                scanf("%d", &p.peso);
                printf("Digite a prioridade da carga: ");
                scanf("%f", &p.prioridade);
                inserirProduto(&carga, p);
                break;
            }
            case 2: {
                int codigo;
                removerProduto(&carga, codigo);
                break;
            }
            case 3: {
                int codigo;
                printf("Digite o codigo do produto a ser buscado: ");
                scanf("%d", &codigo);
                int indice = buscarProduto(&carga, codigo);
                if (indice == -1) {
                    printf("Produto nao encontrado.\n");
                } else {
                    Produto p = carga.produtos[indice];
                    printf("Codigo: %d | Nome: %s | Quantidade: %d | Preco: %.2f\n", p.codigo, p.nome, p.quantidade, p.preco);
                }
                break;
            }
            case 4:
                listarProdutos(&carga);
                break;
            case 5:
                salvarCargas(&carga, "./data/estoque.csv");
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 6);

    liberarFila(&carga);
    return 0;
}
