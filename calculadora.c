#include <stdio.h>
main(){
	int op, n1, n2, cont;
	
	printf("\n!!Bem-Vindo a calculadora!!\n");
	

	do{
	printf("\n1- adicao\n");
	printf("2- subtracao\n");
	printf("3- multiplicacao\n");
	printf("4- divisao\n");
	printf("0- sair\n");
	printf("\nEscolha a operacao: ");
	scanf("%d", &op);
		
		switch(op){
			case 1: printf("Digite dois numeros para serem somados: ");
			scanf("%d", &n1);
			scanf("%d", &n2);
			cont = n1+n2;
			printf("Resultado: %d", cont);
				break;
				
			case 2: printf("Digite dois numeros para serem subtraidos: ");
			scanf("%d", &n1);
			scanf("%d", &n2);
			cont = n1-n2;
			printf("Resultado: %d", cont);
				break;
				
			case 3:printf("Digite dois numeros para serem multiplicados: ");
			scanf("%d", &n1);
			scanf("%d", &n2);
			cont = n1*n2;
			printf("Resultado: %d", cont);
				break;
				
			case 4:printf("Digite dois numeros para realizar a divisao: ");
			scanf("%d", &n1);
			scanf("%d", &n2);
			cont = n1/n2;
			printf("Resultado: %d", cont);
				break;
				case 0: printf("Saindo...");
				
		}
			
			
		
	}while(op!=0);
	
	
	
	
}