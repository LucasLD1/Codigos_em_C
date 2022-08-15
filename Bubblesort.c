// Código que faz ordenação com o método bubblesort de um vetor de 10 números inteiros

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
	
	//Declaração de váriáveis
	int vetor[10];
	int indice;
	
	for(indice = 0; indice<10; indice++) {
		scanf("%d", &vetor[indice]);
	}
	
	//Impressão do vetor antes da ordenação
	printf("Valores do vetor original:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	//Chamada da função
	bubbleSort(vetor,10);
	
	//Impressão do vetor pós-ordenação
	printf("\nValores do vetor ordenados:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	return 0;
}
