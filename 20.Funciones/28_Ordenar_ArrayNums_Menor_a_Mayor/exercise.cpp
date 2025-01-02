
#include "exercise.h"
#include <iostream>

/* Hacer una funcion que cambie el array de numeros int aleatorios
en orden de menor a mayor, para cualquier tamanyo de array.
las funciones vienen definidas en el exercise.h*/

void insertion_sort(int * array, unsigned int size)
{
	int	aux;
	int	i = 0;
	int	j = 0;

/*se ordena por secuencia pillando indices menores de i hasta llegar al final*/
	if (size > 1)
	{
		while (i < size - 1) //importante por que si no j al ser i + 1 se saldría del array
		{
			j = i + 1;
			aux = array[j];
			while (j > 0)
			{
				if (array[j - 1] > aux)
				{
					array[j] = array[j-1];
					array[j-1] = aux;
				}
				j--;	
			}
			i++;
		}
	}
}
void print_array(int* arr, unsigned int n)
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}