#include <iostream>
#include "exercise.h"

/* hacer una funcion que pase un string, su tamayo un char y ver si esta
dicho char en el string. Una funcion devuelve la posicion donde esta si lo
encuentra o -1 si no lo encuentra. y la otra imprime. Las funciones estan definidas como
int contains_character( const char* str , unsigned int size , char c)
void find_character(const char* str, unsigned int size, char c)
Se ha de separar en header exercise.h */

int contains_character( const char* str , unsigned int size , char c)
{
	for (size_t i{}; i < size; i++)
	{
		if (*(str + i) == c)
			return (i);
	}
	return (-1); //Si llega al final del loop, no lo encuentra y por lo tanto es -1
}

void find_character(const char* str, unsigned int size, char c)
{
	unsigned int	index;
	index = contains_character(str, size, c);
	if (index == -1)
		std::cout << "Could not find the character " << c << " in " << str;
	else
		std::cout << "Found character " << c << " at index " << index;

}