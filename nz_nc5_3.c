#include <stdio.h>

int  main() {
    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    /*printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);*/

    printf("Digite seu nome completo: ");
    scanf("%c"); // COLOQUEI PARA LER O \n APÓS DIGITAR O NOME
                 // mas se o nome tem mais de 19 caracteres o 20o. fica
                 // como entrada para o próximo scanf!
    fgets(nome, 20, stdin); // Lê no máximo 19 caracteres da entrada padrão (stdin)
    nome[strcspn(nome, "\n")] = 0; // fgets inclui o '\n' na string, então
                                   // podemos removê-lo com essa instrução
    printf("O nome completo é: %s\n", nome);

    printf("Digite a opção: ");
    scanf(" %c", &opcao); // o espaço antes do % no especificador de formato
                          // é para eliminar o ENTER (\n) da entrada anterior
                          // e ler o caracter apropriadamente
    printf("A opção é: %c\n\n", opcao);

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %e\n", altura);
    printf("A altura é: %f\n", altura);

    return 0;
}