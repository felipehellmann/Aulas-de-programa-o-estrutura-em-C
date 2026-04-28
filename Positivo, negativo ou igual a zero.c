/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero ");
    scanf("%d", &num);
    
    if (num > 0){
        printf("\nPositivo!");
    } else if (num == 0){
        printf("\nIgual a zero!");
    } else{
        printf("\nNegativo!");
    }
}