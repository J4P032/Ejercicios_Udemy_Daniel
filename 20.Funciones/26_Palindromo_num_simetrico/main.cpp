#include <iostream>
#include <string>
#include "exercise.h"

int main(int argc, char **argv)
{
	bool	palindromo;
	
	if (argc < 2)
		return (0);
	palindromo = is_palindrome(std::stoull(argv[1]));
    std::cout << "El numero " << argv[1] << " es palindromo? " << (palindromo ? "verdadero" : "falso")  << std::endl;
	return (0);
}