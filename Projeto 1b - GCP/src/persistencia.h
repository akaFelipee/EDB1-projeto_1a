#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "cargas.h"

void carregarCargas(Estoque *estoque, const char *caminhoArquivo);
void salvarCargas(Estoque *estoque, const char *caminhoArquivo);

#endif
