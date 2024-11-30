#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cargas.h"
#include "persistencia.h"

void carregarCargas(const char *caminhoArquivo) {
    FILE *arquivo = fopen(caminhoArquivo, "r");
    if (!arquivo) {
        printf("Nao foi possivel abrir o arquivo %s\n", caminhoArquivo);
        return;
    }

    Carga carga;
while (fscanf(arquivo, "%9[^,],%49[^,],%f,%9[^,],%99[^\n]\n", carga.id, carga.tipo, &carga.peso, carga.prioridade, carga.descricao) == 5) {
        if (!insercao(carga)) {
            printf("Nao foi possível inserir carga com ID %s na fila.\n", carga.id);
        }
    }

    fclose(arquivo);
}