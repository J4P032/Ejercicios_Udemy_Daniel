
#include <iostream>

/*De un array de chars, hay que contar cuantas vocales y 
cuantas consonantes hay. No nueva linea después del msg
de información.No se puede modificar el nombre de la funcion que dan */

void find_stuf_out( char data[], unsigned int size){
	unsigned int vowel_count{};
	unsigned int consonant_count{};
	
	char vowels[] = "aeiouAEIOU";
	for (size_t i{}; i < size; i++){
		if (std::isalpha(data[i]) != 0){
			for (size_t j{}; j < 10; j++){
				if (data[i] == vowels[j]){
					vowel_count++;
					break;
				}
				else if (j == 9)
					consonant_count++;
			} 
		}
	}
	std::cout << "The string contains " << vowel_count << " vowels and " <<
		consonant_count << " consonants";
}

int main(void)
{
	//char message[] {"John was 8 years old at the time."};
	char message[] = "The sky is blue my friend.";
	find_stuf_out(message, std::size(message));
	return (0);
}