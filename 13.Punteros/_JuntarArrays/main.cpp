
#include <iostream>

/*Se nos pasa dos array de enteros y tenemos que juntarlos en uno nuevo.
Ademas imprimir el resultado con espacios entre elementos y espacio al final
del ultimo. No se puede modificar el nombre de la funcion que dan */

void merge_arrays( int data1[], int data2[], unsigned int size1, unsigned int size2){
	int 	*resultado;
	int		j = 0;

	resultado = new(std::nothrow) int[size1 + size2];
	if(!resultado)
		std::cout << "Memory error allocation" << std::endl;
	else{
		for (size_t i{}; i < (size1 + size2); i++){
			if (i < size1)
				resultado[i] = *(data1 + i);
			else
				resultado[i] = data2[j++];
		}
		for (size_t i{}; i < (size1 + size2); i++)
			std::cout << resultado[i] << " ";
	}
	delete[] resultado;
	resultado = nullptr;
}

int main(void)
{
	int	array1[] = {1,2,3,4,5,66,77};
	int array2[] = {10,20,30,40,50,60};

	merge_arrays(array1, array2, std::size(array1), std::size(array2));
	return (0);
}