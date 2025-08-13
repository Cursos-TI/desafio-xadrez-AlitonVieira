#include <stdio.h>


int main() {

    //criando movimentação da torre
    for (int torre = 0; torre <= 4; torre++) //declarando for para movimentação da torre até 5 movimentos
    {
        printf("TORRE PARA DIREITA\n", torre); //imprimindo movimentos da torre
    }

    //criando movimentação da rainha
    int rainha = 0;
   
    while (rainha <= 7)
    {
        printf("RAINHA PARA ESQUERDA\n", rainha); //imprimindo movimentação da rainha
        rainha++; //evitando looping infinito
    }
    
    //criando movimentação do bispo
    int bispo = 0;

    do
    {
        printf("BISPO PARA CIMA\n", bispo); //declaro movimento do bispo para cima
        printf("BISPO PARA DIREITA\n", bispo); //declaro movimento do bispo para direita criando a diagonal
        bispo++; //evitando looping infinito

    } while (bispo <= 4);
    



    return 0;
}
