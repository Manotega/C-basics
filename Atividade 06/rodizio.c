#include <stdio.h>

int rodizio(int num) {
    switch (num)
    {
    case 1:
    case 2:
        return 1;

    case 3:
    case 4:
        return 2;

    case 5:
    case 6:
        return 3;
    
    case 7:
    case 8:
        return 4;

    case 9:
    case 0: 
        return 5;

    default:
        return -1; 
    }
}

int main() {
    if (rodizio(1) == 1 || rodizio(2) == 1 ) {
        printf("PRIMEIRO TESTE CORRETO!\n");
    } else {
        printf("PRIMEIRO TESTE INCORRETO!\n");
    }

    if (rodizio(3) == 2 || rodizio(4) == 2 ) {
        printf("SEGUNDO TESTE CORRETO!\n");
    } else {
        printf("SEGUNDO TESTE INCORRETO!\n");
    }

    if (rodizio(5) == 3 || rodizio(6) == 3 ) {
        printf("TERCEIRO TESTE CORRETO!\n");
    } else {
        printf("TERCEIRO TESTE INCORRETO!\n");
    }

    if (rodizio(7) == 4 || rodizio(8) == 4 ) {
        printf("QUARTO TESTE CORRETO!\n");
    } else {
        printf("QUARTO TESTE INCORRETO!\n");
    }

    if (rodizio(9) == 5 || rodizio(0) == 5 ) {
        printf("QUINTO TESTE CORRETO!\n");
    } else {
        printf("QUINTO TESTE INCORRETO!\n");
    }

    if (rodizio(10) == -1) {
        printf("TESTE DE NUMERO INVALIDO CORRETO!\n");
    } else {
        printf("TESTE DE NUMERO INVALIDO INCORRETO!\n");
    }

    return 0;
}