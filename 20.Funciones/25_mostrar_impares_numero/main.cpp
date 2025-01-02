
#include <iostream>
#include <string>
//#include <limits.h>

/*hacer una funcion que pasado un unsigned long long int devuelva
los digitos impares desde las unidades hasta su maximo rango
La funcion se ha de llamar show_odds y puede ser void*/

void show_odds(unsigned long long int);


int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	//std::cout << LLONG_MAX;
	show_odds(std::stoull(argv[1]));
	return (0);
}

void show_odds(unsigned long long int num)
{
	int				digito;

	while (num / 10 != 0) 
	{
		digito = num % 10; //sacamos el numero mas a la derecha.
		if ((digito % 2 != 0) || (digito == 0))
			std::cout << digito;
		num /= 10;
	}
	if (num % 2 != 0) //el ultimo digito se escapa del while. Lo tratamos aqui.
		std::cout << num;
}