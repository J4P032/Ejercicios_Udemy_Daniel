#include <iostream>

/* vemos si el array de enteros está ordenado incrementalmente o no
(1,2,3,5) sí // (1,2,4,3) no. El resultado se guardará en una variable booleana
llamada "sorted". La declaración de la funcion no se puede cambiar. */

bool is_collection_sorted(int numbers[], unsigned int collection_size)
{
	bool sorted;
	int i;

	i = 0;
	sorted = false;
	while ((i + 1) < collection_size)
	{
		if (numbers[i] > numbers[i + 1])
			break ;
		i++;
	}
	if (i  == (collection_size - 1))
		sorted = true;
	return (sorted);
}

int main()
{
    //int data[] = {1,2};
	int data[] = {1,2,4,5,8,12,13,16,71,92};
    //int data[] = {1,112,4,5,8,12,13,16,71,92};
	bool incremental;
	incremental = is_collection_sorted(data, (sizeof(data) / sizeof(data[0])));
	std::cout << std::boolalpha;
	std::cout << "El array es incremental? " << incremental;
	return (0);
}