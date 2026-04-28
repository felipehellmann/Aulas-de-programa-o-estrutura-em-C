/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,y;
    int soma, sub, mult;
    float divi;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &x);
    
    printf("\nDigite o segundo numero: \n");
    scanf("%d", &y);
    
    soma = x + y;
    sub = x - y;
    mult = x * y;
    
    printf("\nA sua soma foi: %d", soma);
    printf("\nA sua subtração foi: %d", sub);
    printf("\nA sua multiplicação foi: %d", mult);
    
    if (y != 0){ 
        divi = x / y;
        printf("\nA sua divisão foi: %f", divi);
    } else {
        printf("\nImpossivel dividir por 0");
    }
}