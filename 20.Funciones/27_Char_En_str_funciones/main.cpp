#include <iostream>
#include <string>
#include "exercise.h"

int main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	find_character(argv[1], sizeof(argv[1]), argv[2][0]); //[2][0] por que es un char lo que deseamos pasar

	return (0);
}