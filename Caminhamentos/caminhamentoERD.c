//
// Created by mrscpubn on 21/03/19.
//
#include "caminhamentoERD.h"


void eRdRecursivo(Arvore arvore){

    if (verificarArvoreVazia(arvore) == false){

        eRdRecursivo(arvore->esquerada);
        mostarRaiz(arvore);
        eRdRecursivo(arvore->direita);


    }

}