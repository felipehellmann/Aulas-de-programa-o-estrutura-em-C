/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite seu primeiro numero: ");
    scanf("%d", &num1);
    
    printf("\nDigite seu segundo numero: ");
    scanf("%d", &num2);
    
    
    
    if(num1 > num2){
        printf("\n%d é maior", num1);
    } else if(num1 < num2){
        printf("\n%d é maior", num2);
    } else{
        printf("\nOs dois numeros são iguais");
    }
    
}