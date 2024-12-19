
#include <iostream>

/*Se nos pasa un array de enteros y tenemos que devolver
la direccion del numero mayor dentro de dicho array
el puntero se llamara max_address. no se puede alteral
la funcion */

int* maximum_address(int data[], unsigned int size)
{
	int* 	max_address;
	int		aux;
	int		i;

	aux = -2147483648; //min int possible.
	i = 0;
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		if (data[i] > aux)
		{
			max_address = data + i; // = &data[i]
			aux = *(data + i); // =data[i]
		}
		i++;
	}
	return max_address;
}

int main(void)
{
    //int data[] = {1,2,4,5,9,3,6,7,44,55};
	int data[] = {11,2,44,45,109,49,43,46,47,55,88};
	int *p;
	
	p = maximum_address(data, std::size(data));
	std::cout << "Maximo numero es : " << *(data + (p - data))  << " y su direccion es : " << p << std::endl;
	return (0);
}