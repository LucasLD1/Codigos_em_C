// C�digo que faz ordena��o com o m�todo bubblesort de um vetor de 10 n�meros inteiros

#include <stdio.h>

void bubbleSort (int *vetor, int N) {
	int i, aux, troca = 1;
	while (troca) {
		troca = 0;
		for (i = 0; i < N-1; i++) {
			if (vetor[i] > vetor[i+1]) {
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;
				troca = 1;
			}
		}
	}
}



int main () {
	
	//Declara��o de v�ri�veis
	int vetor[10];
	int indice;
	
	for(indice = 0; indice<10; indice++) {
		scanf("%d", &vetor[indice]);
	}
	
	//Impress�o do vetor antes da ordena��o
	printf("Valores do vetor original:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	//Chamada da fun��o
	bubbleSort(vetor,10);
	
	//Impress�o do vetor p�s-ordena��o
	printf("\nValores do vetor ordenados:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	return 0;
}
