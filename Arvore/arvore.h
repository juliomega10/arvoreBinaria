//
// Created by mrscpubn on 21/03/19.
//

#ifndef ARVOREBINARIA_ARVORE_H
#define ARVOREBINARIA_ARVORE_H

#include "../No/no.h"
#include "../Util/booleano.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct No * Arvore;

Arvore criarArvore();

enum bool verificarArvoreVazia(Arvore arvore);

void mostraArvore(Arvore arvore);

void mostarRaiz(Arvore arvore);


Arvore construirArvore(int valorElemento, Arvore arevoreEsquerda, Arvore arvoreDireita);

#endif //ARVOREBINARIA_ARVORE_H
