//
// Created by mrscpubn on 21/03/19.
//

#include "altura.h"


int obterAltura(Arvore arvore){

    int alturaAravore,alturaEsquerda,alturaDireita,alturaMaior;


    if(verificarArvoreVazia(arvore)== true){alturaAravore = -1;}
    else{

        alturaEsquerda = obterAltura(arvore->esquerada);
        alturaDireita  = obterAltura(arvore->direita);

        alturaMaior = alturaEsquerda;

        if (alturaDireita > alturaEsquerda) {alturaMaior=alturaEsquerda;}

        alturaAravore = alturaMaior + 1;


    }

    return alturaAravore;

}
