#include <iostream>
#include "exercise.h"

int main(int argc, char **argv)
{
	if (argc < 2) //la secuencia de numeros será pasada sin "" y con espacios entre argumentos.
		return (0);

	bool out_even;
	int	*array = new int[argc - 1];
	for (size_t i = 0; i < (argc - 1); ++i)
		array[i] = atoi(argv[i + 1]); //mete cada argv en el array
	is_sum_even(array, (argc - 1), out_even);
	std::cout << "array: ";
	for (size_t i{}; i < (argc - 1); ++i){
		std::cout << array[i] << " ";	
	}
	std::cout << std::endl;
	delete[] array;
	std::cout << "result: " << std::boolalpha << out_even << std::endl;
	return (0);
}
