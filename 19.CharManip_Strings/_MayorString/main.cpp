
#include <iostream>
#include <string>

/*Nos pasan una cadena de strings y tenemos que ver cual es el de mayor tamaño
alfabeticamente.
No se puede modificar el nombre de la funcion que dan */

std::string who_s_the_greatest( std::string data[], unsigned int size){
	std::string result;

	size_t 	bigger_index = 0;
	size_t	j;
	for (size_t i{}; i < size; i++){
		j = i + 1;
		while ( j < size){
			if ((data[j] > data[i]) && data[bigger_index] < data[j])
				bigger_index = j;
			j++;
		}
	}
	result = data[bigger_index];
	return result;
}

int main(void)
{
	std::string input[] {"I","am","the","zing","of","the","jungle"};
	
	std::cout << who_s_the_greatest(input, std::size(input) ) << std::endl;
	return (0);
}