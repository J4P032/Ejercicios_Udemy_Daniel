
#include <iostream>

/* vemos un array de chars y contamos el número de vocales que almacenamos en
"vowel_count". La declaración de la funcion no se puede cambiar. */

void hunt_for_vowels(char message[], unsigned int size)
{
	unsigned int	vowel_count{};
	int				j;
	char			vowels[] = "aeiouAEIOU"; 

	for (int i = 0; i < size; i++)
	{
		j = 0;
		while (j < (sizeof(vowels) / sizeof(vowels[0])))
		{
			if ((message[i] == vowels[j]) && (message[i] != '\0'))
				vowel_count++;
			j++;
		}
	}
	std::cout << "The string : " << message << " has " << vowel_count << " vowels";
}

int main(void)
{
    //char message[] = "En un lugar de la mancha de cuyo nombre no quiero acordarme...";
	char message[] = {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};
    hunt_for_vowels(message, (sizeof(message) / sizeof(message[0])));
	return (0);
}