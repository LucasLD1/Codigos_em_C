//C�digo que faz ordena��o com o m�todo insertsort de um vetor de 10 n�meros inteiros

#include <stdio.h>

void insertSort (int *vetor, int N) {
	int aux, i, j;
	for (i = 1; i < N; i++) {
		aux = vetor[i];
		for (j = i-1; (j >= 0) && (aux < vetor[j]); j--)
			vetor[j+1] = vetor[j];

		vetor[j+1] = aux;
	}
}



int main () {
	
	//Declara��o de v�ri�veis
	int vetor[10];
	int indice;
	
	//Entrada de dados
	for(indice = 0; indice<10; indice++) {
		scanf("%d", &vetor[indice]);
	}
	
	//Impress�o do vetor antes da ordena��o
	printf("Valores do vetor original:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	//Chamada da fun��o
	insertSort(vetor,10);
	
	//Impress�o do vetor p�s-ordena��o
	printf("\nValores do vetor ordenados:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	return 0;
}
