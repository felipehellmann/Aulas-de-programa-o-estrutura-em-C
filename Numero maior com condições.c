/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, maior;
    
    printf("Digite seu primeiro numero: ");
    scanf("%d", &num1);
    
    printf("\nDigite seu segundo numero: ");
    scanf("%d", &num2);
    
    maior = (num1 > num2) ? num1 : num2;
    printf("\nMaior numero: %d", maior);
}