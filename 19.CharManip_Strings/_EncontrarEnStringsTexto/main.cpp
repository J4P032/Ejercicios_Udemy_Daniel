
#include <iostream>
#include <cstring>

/*Nos pasan una cadena de strings y tenemos que ver cual/es tienen la llave
No se puede modificar el nombre de la funcion que dan */

void find_matches( std::string data[], unsigned int size, const char* key){
	std::string * matches = new std::string [size];
	size_t		count = 0;
	int			*index_found = new(std::nothrow) int[size]; //nothrow no lanza excepcion y nos permite if(!index_found)

	if (!index_found)
		std::cout << "memory fail" << std::endl;
	for (size_t i{}; i < size; i++){
		if (data[i].find(key, 0) != std::string::npos){ //.find da indice donde lo encuentra. Si es el num "npos" es que no lo encontro.
			index_found[count] = i; //meto los indices que sí ha sido encontrado el key...
			count++; 
		}
	}
	std::cout << "Found " << count << " matches. They are: ";
	for (size_t i{}; i < count; i++){
		std::cout << data[index_found[i]]; //...para imprimirlo aqui.
		if (i != count - 1)
			std::cout << " "; //el ultimo no ha de tener espacio segun ejercicio.
	} 
	delete[] index_found;
	index_found = nullptr;	
	delete[] matches;
}

int main(void)
{
	std::string	input[] {"catching","iteration","fresh","iterative","outside","mercy"};
	char		key[] = "iter"; 
	
	find_matches(input, std::size(input), key);
	return (0);
}