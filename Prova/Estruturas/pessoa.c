#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char nome[50];
    char telefone[50];
    Data nasc;
} Pessoa;

int main() {
    Pessoa laura;
    printf("Nome: ");
    fgets(laura.nome, 50, stdin);
    printf("Telefone: ");
    fgets(laura.telefone, 50, stdin);
    printf("Data nasc dd/mm/AAAA: ");
    scanf("%d %d %d%*c", &laura.nasc.dia, &laura.nasc.mes, &laura.nasc.ano);

    printf("%s%s%d/%d/%d", laura.nome, laura.telefone, laura.nasc.dia, laura.nasc.mes, laura.nasc.ano);
}