#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("** Bem vindo ao Desafio de Xadrez**\n");
    /int main(){    // funcao principal
    int casas = 0; //contador de casas movidas
    int bispo = 5; //total de casas a serem movidas
    int casas1 = 0; 
    int torre = 5; 
    int casa3 = 0; 
    int rainha = 8; 

    //Movimento do Bispo
    while (casas < bispo) {
        printf("Bispo: Cima, Direita \n"); //Direçao do movimento
        casas++; 
    }

    //Movimento da Torre
     {
        printf("Torre: Direita \n"); //Direçao do movimento 
        casas1++; 
     while (casas1 < torre);
    } 

    
   //Movimento da Rainha
    for (int i = 0; i < rainha; i++) 
    {
       printf("Rainha: Esquerda \n"); //Direçao do movimento
    }
    return 0;
}
