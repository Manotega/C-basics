#include <stdio.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct {
    char nome[100];
    char telefone[20];
    DATA nasc;
} PESSOA;

int main() {
    PESSOA melhorAmigo;
    printf("Digite o nome do seu melhor amigo: ");
    fgets(melhorAmigo.nome, 100, stdin);
    printf("Digite o telefone do seu melhor amigo: ");
    fgets(melhorAmigo.telefone, 20, stdin);
    printf("Digite a data de nascimento do seu melhor amigo: ");
    scanf("%d %d %d%*c", &melhorAmigo.nasc.dia, &melhorAmigo.nasc.mes, &melhorAmigo.nasc.ano);

    printf("\nNome: %sTelefone: %sData de nascimento: %d/%d/%d", 
        melhorAmigo.nome, melhorAmigo.telefone, melhorAmigo.nasc.dia, melhorAmigo.nasc.mes, melhorAmigo.nasc.ano)
    ;
    return 0;
}