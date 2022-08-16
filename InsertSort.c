//Código que faz ordenação com o método insertsort de um vetor de 10 números inteiros

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
	
	//Declaração de váriáveis
	int vetor[10];
	int indice;
	
	//Entrada de dados
	for(indice = 0; indice<10; indice++) {
		scanf("%d", &vetor[indice]);
	}
	
	//Impressão do vetor antes da ordenação
	printf("Valores do vetor original:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	//Chamada da função
	insertSort(vetor,10);
	
	//Impressão do vetor pós-ordenação
	printf("\nValores do vetor ordenados:\n");
	for(indice = 0; indice<10; indice++) {
		printf(" %d", vetor[indice]);
	}
	
	return 0;
}
