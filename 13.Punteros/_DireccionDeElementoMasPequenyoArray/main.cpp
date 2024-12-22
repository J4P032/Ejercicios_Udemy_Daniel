
#include <iostream>

/*Se nos pasa un array de enteros y tenemos que pasar la direccion de memoria
del elemento mas pequenyo, pero se tiene que usar aritmetica de punteros para
solucionar el ejercicio. No se puede modificar el nombre de la funcion que dan */

int* minimun_address( int data[], unsigned int size)
{
	int* 	min_address;
	int*	aux;

	if (size == 0)
		return (NULL);
	min_address = data;
	aux = data;
	while (aux < (data + size))
	{
		if (*min_address > *aux)
			min_address = aux;
		std::cout << *min_address << " ";
		aux++;
	}
	return min_address;
}

int main(void)
{
	int	array[] = {45,7,8,9,4,-9,48,-18,97,24,68,-20};
	int	*puntero;

	puntero = minimun_address(array, std::size(array));
	std::cout << "La direccion de memoria en hex del numero " << *puntero << " es : " << puntero << std::endl;
	return (0);
}