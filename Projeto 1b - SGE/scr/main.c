#include <stdio.h>
#include "estoque.h" // p/ manipulação do vetor de produtos
#include "persistencia.h" // p/  manipulação de arquivos

int main()
{
    Estoque estoque;
    inicializarEstoque(&estoque, 10); // Capacidade inicial de 10
    // precisa atualizar caso ultrapasse 10!

    int opcao;
    do {
        printf("\nSistema de Gerenciamento de Estoque\n");
        printf("1. Inserir Produto\n");
        printf("2. Remover Produto\n");
        printf("3. Buscar Produto\n");
        printf("4. Atualizar Produto\n");
        printf("5. Listar Produtos\n");
        printf("6. Salvar e Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirProdutoMenu(&estoque); // feito
                break;
            case 2:
                removerProdutoMenu(&estoque); // n feito
                break;
            case 3:
                buscarProdutoMenu(&estoque); // n feito
                break;
            case 4:
                // atualizar produto
                break;
            case 5:
                // listar produtos
                break;
            case 6:
                // chama função pra salvar o produto no arquivo "estoque.txt"
                printf("Dados salvos com sucesso!\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 6);

    liberarEstoque(&estoque); // liberar memoria alocada dinam.
    return 0;
}