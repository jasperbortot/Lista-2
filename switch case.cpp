#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char conceito;
	
	printf("Digite o conceito: \n ");
	scanf("%c", & conceito);
	
	switch(conceito){
		case 'A':
			printf("Aprendizagem Plena \n ");
			break;
		case 'B':
			printf("Parcialmente Plena \n ");
			break;
		case 'C':
			printf("Suficiente \n ");
			break;
		case 'D':
			printf("Insuficiente \n ");
			break;		
		default:
			printf("Conseito Inválido \n ");	
	}
	
	return 0;
}
