#include <iostream>
#include <string>
#include "exercise.h"

int main(int argc, char **argv)
{
	if (argc < 2) //la secuencia de numeros será pasada sin "" y con espacios entre argumentos.
		return (1);

	int	*array = new int[argc - 1];
	for (size_t i = 0; i < (argc - 1); ++i)
		array[i] = atoi(argv[i + 1]); //mete cada argv en el array
	print_array(array, (argc - 1));
	delete[] array;

	return (0);
}