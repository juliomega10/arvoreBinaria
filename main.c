#include <stdio.h>
#include "Util/booleano.h"
#include "Arvore/arvore.h"
#include "Caminhamentos/caminhamentoERD.h"
#include "Altura/altura.h"


void testePrograma();

int main() {

    testePrograma();

}

void testePrograma(){


    Arvore arvoreCriarArevore;

    /////// teste para criar arvore
    arvoreCriarArevore = criarArvore();
    arvoreCriarArevore->elemento = 10;
    printf("elemento %d\n",arvoreCriarArevore->elemento);

    /////// teste para verificarArvoreVazia
    Arvore arvoreVerificarArvoreVazia;
    printf("vazia %d\n",verificarArvoreVazia(arvoreVerificarArvoreVazia));

    /////// teste para mostraRaiz
    Arvore  arvoreMostraRaiz;
    arvoreMostraRaiz = arvoreCriarArevore;
    mostarRaiz(arvoreCriarArevore);


    /////// teste para mostraRaiz
    Arvore arvoreConstruirArvore,esquerda,direita;
    arvoreConstruirArvore = construirArvore(13,arvoreCriarArevore,arvoreMostraRaiz);
    mostarRaiz(arvoreConstruirArvore);

    /////// teste para eRdRecursivo
    printf("\neRdRecursivo \n\n");
    Arvore arvoreeRdRecursivo;
    arvoreeRdRecursivo = arvoreConstruirArvore;
    eRdRecursivo(arvoreeRdRecursivo);


    /////// teste para alturaArvore
    printf("A altura dessa arvore 'e %d",obterAltura(arvoreeRdRecursivo));






}