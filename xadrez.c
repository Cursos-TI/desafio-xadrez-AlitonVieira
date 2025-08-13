#include <stdio.h>


int main() {

    //criando movimentação da torre
    for (int torre = 0; torre <= 4; torre++) //declarando for para movimentação da torre até 5 movimentos
    {
        printf("TORRE PARA DIREITA\n", torre); //imprimindo movimentos da torre
    }
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação da rainha
    int rainha = 0;
   
    while (rainha <= 7)
    {
        printf("RAINHA PARA ESQUERDA\n", rainha); //imprimindo movimentação da rainha
        rainha++; //evitando looping infinito
    }
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação do bispo
    int bispo = 0;

    do
    {
        printf("BISPO PARA CIMA\n", bispo); //declaro movimento do bispo para cima
        printf("BISPO PARA DIREITA\n", bispo); //declaro movimento do bispo para direita criando a diagonal
        bispo++; //evitando looping infinito

    } while (bispo <= 4);
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação do cavalo
    int movimento = 1; // controle de movimentação

    while(movimento--)
    {
        for(int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("CAVALO PARA BAIXO\n"); //declaro movimento do cavalo par baixo 2x
        }
        printf("CAVALO PARA ESQUERDA\n"); //declaro movimento do cavalo para esquerda
    }
    
    return 0;
}
