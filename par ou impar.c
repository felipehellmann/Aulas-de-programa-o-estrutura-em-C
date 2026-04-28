/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite seu numero para verificação:\n");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("\nSeu numero digitado foi %d, e ele é par.", num);
    } else {
        printf("\nSeu numero digitado foi %d, e ele é impar.", num);
    }

}