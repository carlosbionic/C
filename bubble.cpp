#include <stdio.h>

// Funcion que intercambia dos elementos
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

// Funcion para implementar el metodo de ordenamiento
void bubble(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

		for (j = 0; j < n-i-1; j++)
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}

// Funcion para imprimir el array
void printArr(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] ={32, 13, 55, 43, 32, 98, 88};
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Array original: \n");
	printArr(arr, n);

	bubble(arr, n);
	printf("Array ordenado: \n");
	printArr(arr, n);
	return 0;
}
