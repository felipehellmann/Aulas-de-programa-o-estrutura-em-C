/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("digite seu numero: ");
    scanf("%d", &num);
    
    
    (num % 2 == 0) ? printf("\npar") : printf("\nimpar");
    
}