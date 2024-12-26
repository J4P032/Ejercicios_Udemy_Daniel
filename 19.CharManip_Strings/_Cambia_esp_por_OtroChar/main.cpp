
#include <iostream>

/*Dado un array de chars, debemos cambiar los espacios por
otro caracter. En el ejercicio nos piden "_".
No se puede modificar el nombre de la funcion que dan */

void replace_spaces( char data[], unsigned int size){
	char * result{nullptr};

	result = new char[size];
	for (size_t i{}; i < size; i++)
		result[i] = (std::isblank(data[i]) != 0) ? '_' : data[i];
	std::cout << "After replacing the spaces, we get : " << result;
	delete[] result;
	result = nullptr;
}

int main(void)
{
	char message[] {"John was 8 years old at the time."};
	//char message[] = "The sky is blue my friend.";
	replace_spaces(message, std::size(message));
	return (0);
}