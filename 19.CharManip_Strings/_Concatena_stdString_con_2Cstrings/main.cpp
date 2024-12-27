
#include <iostream>
#include <cstring>

/*Hay que juntar dos cstring dados, con un espacio entre medias y pasarlo
como un std::string
No se puede modificar el nombre de la funcion que dan */

std::string build_from_raw_pieces( const char* str1, const char* str2){
	std::string result;
	((result += str1) += " ") += str2; //solo puede ir uno a uno sumando cstrings.
	return result;
}

int main(void)
{
	const char str1[] {"Hello there!"};
	const char str2[] {"How are you?"};
	
	std::cout << build_from_raw_pieces(str1, str2) << std::endl;
	return (0);
}