#include <stdio.h>

int main() {
    int placa;
    printf("Digite o ultimo numero da placa:\n");
    scanf("%d", &placa);

    switch (placa)
    {
    case 1:
    case 2:
        printf("Segunda-feira\n");
        break;

    case 3:
    case 4:
        printf("Terça-feira\n");
        break; 

    case 5:
    case 6:
        printf("Quarta-feira\n");
        break;
    
    case 7:
    case 8:
        printf("Quinta-feira\n");
        break;

    case 9:
    case 0: 
        printf("Sexta-feira\n");
        break;
    }

    return 0;
}