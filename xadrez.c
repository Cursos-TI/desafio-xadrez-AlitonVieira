#include <stdio.h>

void torre(int casas){
    if (casas > 0){
        printf("TORRE PARA DIREITA\n");
        torre(casas - 1);
    }
}

void rainha(int casas){
    if (casas > 0){
        printf("RAINHA PARA ESQUERDA\n");
        rainha(casas - 1);
    }
}

void bispo(int casas){
    if (casas > 0){
        printf("BISPO DIAGONAL DIREITA PARA CIMA\n");
        bispo(casas - 1);
    }
}


int main() {

    //criando movimentação da torre
    torre(5);
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação da rainha
    rainha(8);
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação do bispo
    bispo(5);
        printf("\n"); //criando espaço entre a impressão da movimentação das peças

    //criando movimentação do cavalo
    int movimento = 1; // controle de movimentação

    while(movimento--)
    {
        for(int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("CAVALO PARA CIMA\n"); //declaro movimento do cavalo par cima 2x
        }
        printf("CAVALO PARA DIREITA\n"); //declaro movimento do cavalo para direita
    }
    
    return 0;
}
