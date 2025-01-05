#include <iostream>
#include "exercise.h"

int main(int argc, char **argv)
{
	if (argc < 2) //la secuencia de numeros será pasada sin "" y con espacios entre argumentos.
		return (0);

	double	*array = new double[argc - 1]; //no tiene que ser const, por que si no, no podre crear el array.
	const double	*P_max; //const por que si no podría ser alterado y es un array const por funcion.

	for (size_t i = 0; i < (argc - 1); ++i)
		array[i] = atof(argv[i + 1]); //mete cada argv en el array. Notar que es atof (ascii to float), que lo hace a double.
		
	P_max = find_max_address(array, (argc - 1));
	
	std::cout << "array: ";
	for (size_t i{}; i < (argc - 1); ++i){
		std::cout << array[i] << " ";	
	}
	std::cout << std::endl;
	std::cout << "el mayor es: " << *P_max << std::endl;
	delete[] array;
	return (0);
}
