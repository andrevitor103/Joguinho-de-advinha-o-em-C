#include <stdio.h>

int main() {
    int valor;
    int max = 10;
    printf("Digite valor para tabuada ");
    scanf("%d", &valor);

    for(int i = 1; i <= max; i++) {
        int result = valor * i;
        printf("%d x %i = %d \n", valor, i, result);
    }

}