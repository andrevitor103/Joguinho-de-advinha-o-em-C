#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_TENTATIVAS 8

int main() {
    
    int segundos = time(0);
    srand(segundos);

    int numerosecreto = rand() % 100;
    int chute;
    int continuar = 0;
    int totaltentativas = 0;
    double totalPontos = 1000;

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Advinhacao! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

      while (continuar == 0) {
        totaltentativas++;

         if (totaltentativas > NUMERO_TENTATIVAS) {
            printf("Excedeu numero de tentativas");
            printf("\n");
            printf("       \\|/ ____ \\|/    \n");   
            printf("        @~/ ,. \\~@      \n");   
            printf("       /_( \\__/ )_\\    \n");   
            printf("          \\__U_/        \n");
            printf("\n");
            break;
        }
       
        printf("Digite seu numero: ");
        scanf("%d", &chute);
        double pontosperdidos = abs((chute - numerosecreto)) / (double) 2;
        totalPontos = totalPontos - pontosperdidos;

        if (chute == numerosecreto) {
            continuar = 1;
            printf("Parabeens voce acertou com %d tentativas sua pontuacao foi %.2f", totaltentativas, totalPontos);
            printf("\n");
            printf("             OOOOOOOOOOO               \n");
            printf("         OOOOOOOOOOOOOOOOOOO           \n");
            printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
            printf("    OOOOOO      OOOOO      OOOOOO      \n");
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
            printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
            printf("         OOOOOO         OOOOOO         \n");
            printf("             OOOOOOOOOOOO              \n");
            printf("\n");
            } else {
            if (chute > numerosecreto) {
                printf("Seu numero foi maior\n");
            } else {
                printf("Seu numero foi menor\n");
            }
        }
    }

    
}
