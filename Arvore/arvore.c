//
// Created by mrscpubn on 21/03/19.
//

#include "arvore.h"


Arvore criarArvore(){

    Arvore nova;


    nova = (struct No*)malloc(sizeof(struct No));


}

enum bool verificarArvoreVazia(Arvore arvore){


    if (arvore == NULL){


        return true;

    }

    return false;

}

void mostraArvore(Arvore arvore){


    //todo
    // implementar essa funcao depende da explicao de lisbte sobre o que vem a ser motrar arvore


}

void mostarRaiz(Arvore arvore){


    printf("A raiz da arvore tem o valor %d \n",arvore->elemento);



}

Arvore construirArvore(int valorElemento, Arvore arevoreEsquerda, Arvore arvoreDireita){

    Arvore novaArvore;


    novaArvore = criarArvore();


    novaArvore->elemento = valorElemento;
    novaArvore->esquerada = arevoreEsquerda;
    novaArvore->direita = arvoreDireita;

    return novaArvore;

}

