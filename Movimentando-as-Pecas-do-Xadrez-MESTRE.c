#include <stdio.h>

/*
Torre - 5 casas para a direita (movimento em linha reta)
Bispo - 5 casas para cima e 5 casas para direita (movimento na diagonal)
Rainha - 8 casa para a esquerda (movimento em linha reta)
Cavalo - 2 casas pra cima e 1 casa para direita (movimento em L)
*/

//Protótipos para a chamada no main(), acho mais fácil organizar assim, pois em C# posso fazer as funções abaixo do main() e estou acostumado assim/acho mais fácil de visualizar para futuras manutenções.
void movimentoTorre(int);
void movimentoBispo(int);
void movimentoRainha(int);
void movimentoCavalo(int);


int main(){

    int moveTorre = 5;
    movimentoTorre(moveTorre); 

    printf("\n-------------------------------------------\n\n");

    int moveBispo = 5;
    movimentoBispo(moveBispo);

    printf("\n-------------------------------------------\n\n");

    int moveRainha = 8;
    movimentoRainha(moveRainha);

    printf("\n-------------------------------------------\n\n");

    int moveCavalo = 1;
    movimentoCavalo(moveCavalo);

    return 0;
}

void movimentoTorre(int moveTorre){
    if(moveTorre > 0){
        printf("Torre move uma casa para direita\n");
        movimentoTorre(moveTorre - 1);
    }
}

void movimentoBispo(int moveBispo){ //externo - vertical / interno - horizontal
    if(moveBispo > 0){
        for(int moveCima = 0; moveCima < 1; moveCima++){
            for(int moveDireita = 0; moveDireita < 1; moveDireita++){
                printf("Bispo move uma casa para cima\n");
                printf("Bispo move uma casa para direita\n");
            }
        }
        movimentoBispo(moveBispo - 1);
    }
}

void movimentoRainha(int moveRainha){
    if(moveRainha > 0){
        printf("Rainha move uma casa para esquerda\n");
        movimentoRainha(moveRainha - 1);
    }
}

void movimentoCavalo(int moveCavalo){
    for(int i = 0; i < moveCavalo; i++){
        for(int j = 0; j < 3; j++){
            if( j < 2){
                printf("Cavalo move uma casa para cima\n");
                continue;
            }
            printf("Cavalo move uma casa para direita\n");
        }
    }
}