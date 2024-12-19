#include <iostream>

/* se le pasa un array de enteros y su tamanyo y hay que eliminar los duplicados
e imprimir un mensaje como este:
The collection contains n unique numbers, they are : n x y z
y detras del ultimo numero ha de haber un espacio. Los numeros no tienen que ir
ordenados y el tamaño maximo del array que se dará será de 20 unidades.
*/
void unique_numbers(int numbers[], unsigned int collection_size)
{
	size_t	j;
	size_t	k;
	size_t	counter;
	int		number;
	int		aux[20];

	if (collection_size == 0)
		counter = 0;
	else
	{
		counter = collection_size;
		for (size_t i{}; i < collection_size; i++)
		{
			j = i + 1;
			while (j < collection_size)
			{
				if (numbers[i] == numbers[j])
				{
					counter--;
					break ; //importante para no contarlo 2 veces si existen más
				}
				j++;		
			}
		}
		std::cout << "The collection contains " << counter << " unique numbers, they are : ";
		aux[0] = numbers[0];
		k = 1;
		for (size_t i{1}; i < collection_size; i++)
		{
			j = 0;
			while (j < counter)
			{
				if (numbers[i] == aux[j])	
					break ;
				j++;
			}
			if (j == counter)
			{
				aux[k] = numbers[i];
				k++;
			}	
		}
		for (size_t i{0}; i < counter; i++)
			std::cout << aux[i] << " ";
	}
}

int main()
{
    //int data[] = {1,2,4,5,1,8,2,3,6,1,4,2};
    int data[] = {12,3,21,3,8,2,21,4,3};
	unique_numbers(data, (sizeof(data) / sizeof(data[0])));
	return (0);
}