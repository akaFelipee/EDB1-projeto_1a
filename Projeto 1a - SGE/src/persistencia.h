#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "estoque.h"

void carregarEstoque(Estoque *estoque, const char *nomeArquivo);
void salvarEstoque(Estoque *estoque, const char *nomeArquivo);

#endif
