#include <stdio.h>

int main() {
    /*
    Incremento (++)
	Pré-Incremento ++a Pós-Incremento a++
	Decremento (--)
	Pré-Decremento --a
	Pós-Decremento a--
    */

    int numero1 = 1, resultado;
    
    
    printf("Antes do incremento: %d\n", numero1);
    numero1++;
    printf("Após o incremento: %d\n", numero1);


    printf("Antes do decremento: %d\n", numero1);
    numero1--;
    printf("Após o decremento: %d\n", numero1);
    
    
    // Neste ponto numero1 é igual a 1
    
    printf("\nAntes do incremento: %d\n", numero1);
    resultado = numero1++;
    printf("Após o pós-incremento: Número1 = %d  --  Resultado = %d\n", numero1, resultado);


    // Neste ponto numero1 é igual a 2
    
    printf("\nAntes do incremento: %d\n", numero1);
    resultado = ++numero1;
    printf("Após o pré-incremento: Número1 = %d  --  Resultado = %d\n", numero1, resultado);


    // Neste ponto numero1 é igual a 3
    
    printf("\nAntes do decremento: %d\n", numero1);
    resultado = --numero1;
    printf("Após o pré-decremento: Número1 = %d  --  Resultado = %d\n", numero1, resultado);


    // Neste ponto numero1 é igual a 2
    
    printf("\nAntes do decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após o pós-decremento: Número1 = %d  --  Resultado = %d\n", numero1, resultado);


/*

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    // resultado receberá o valor de (resultado + 20)
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    // resultado receberá o valor (resultado - valor de numero1)
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    resultado /= 2;
    printf("Resultado: %d\n", resultado);
    
*/

    return 0;
}