/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float saldo, deposito, saque;
    int escolha;
    
    saldo = 1000;
    saque = 0;
    deposito = 0;
    
    if(saque > saldo){
        printf("Não pode sacar mais que seu saldo.");
    }
    
    
    printf("1 - Depositar.");
    printf("\n2 - Sacar.");
    printf("\n3 - Verificar saldo.");
    printf("\n4 - Sair do sistema.\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha);
    
    switch(escolha){
        case 1:
            printf("\nQual valor você pretende depositar? ");
            scanf("%f", &deposito);
            saldo = (saldo + deposito);
            break;
        case 2:
            printf("\nQual valor você pretende sacar? ");
            scanf("%f", &saque);
            saldo = (saldo - saque);
            break;
        case 3:
            printf("\nSeu saldo é: %.2f.", saldo);
            break;
        case 4:
            printf("\nSaindo do sistema.");
            break;
        default:
            printf("\nIndefindo.");
            break;
    }
    
}