// O código a seguir é uma calculadora que realiza as operações básicas entre dois números, mostrando o resultado com até três casas decimais

#include <stdio.h>


#define TRUE 1

int main(){
	
	float num1, num2, result;
	int operacao, continuar;
	
	
	while(TRUE){
		
		
		// Entrada de dados 
		printf("Digite o primeiro valor:\n");
		scanf("%f", &num1);
		printf("Digite o segundo valor:\n");
		scanf("%f", &num2);
		
		
		// Decisão de qual operador aritmético irá usar
		printf("Escolha qual operacao sera realizada digitando o numero respectivo:\n");
		printf("Soma - 1\n");
		printf("Subtracao - 2\n");
		printf("Divisao - 3\n");
		printf("Multiplicacao - 4\n");
		scanf("%d", &operacao);
		
		// Processamento dos dados
		switch (operacao) {
	        case 1:
	            result = num1 + num2;
	            break;
	        case 2:
	            result = num1 - num2;
	            break;
	        case 3:
	            result = num1 / num2;
	            break;
	        case 4:
	            result = num1 * num2;
	            break;
	    }
		
		
		// Saída de dados
		printf("O resultado e: %.2f\n", result);
		
		printf("Deseja continuar usando a calculadora\n");
		printf("Sim - 1\n");
		printf("Nao - 0\n");
		scanf("%d", &continuar);
		
		switch (continuar) {
	        case 0:
	            return 0;
	        case 1:
	            system("cls");
				break;
		}
	}
}
