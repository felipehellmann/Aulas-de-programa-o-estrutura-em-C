/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &nota2);
	printf("\nDigite sua terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	if (media >= 7){
	    printf("\nVoce está aprovado.\nSua média é %.2f", media);
	} else {
	    printf("\nVocê está reprovado.\nSua média é %.2f", media);
	}

}