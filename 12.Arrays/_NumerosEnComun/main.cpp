
#include <iostream>

/*Tenemos dos arrays de tamaño fijo 10 de enteros y tenemos que ver cuantos
elementos tienen en comun e imprimirlos separados por un espacio incluso el ultimo elemento
si no tiene elementos en comun imprimira el mensaje sin espacio destras de elements
 .La declaración de la funcion no se puede cambiar. */

void common_elements(int array_1[], int array_2[])
{
	int	j;
	int	k;
	int	counter;
	int	aux[10]{};

	counter = 0;
	for (size_t i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 10)
		{
			if (array_1[i] == array_2[j])
			{
				k = 0;
				while (k < counter)
				{
					if (array_1[i] == aux[k]) 
						break ;
					k++;
				}
				if (k == counter) //array1[i] not in the aux[]
				{
					aux[k] = array_1[i];
					counter++;
					break ;
				}
			}
			j++;
		}
	}
	if (counter == 0)
		std::cout << "There are " << counter << " common elements";
	else
	{
		std::cout << "There are " << counter << " common elements they are : ";
		for (size_t i = 0; i < counter; i++)
			std::cout << aux[i] << " ";
	}
}

int main(void)
{
    int data1[] = {1,2,4,5,9,3,6,7,44,55};
	int data2[] = {11,2,44,45,49,43,46,47,55,88};
    common_elements(data1, data2);
	return (0);
}