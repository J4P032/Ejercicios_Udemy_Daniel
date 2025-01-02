
#include <iostream>

/*hacer una funcion que pasado un entero devuelva
la suma de sus digitos. Tiene que ser unsigned int
y la funcion se ha de llamar digit_sum*/

unsigned int digit_sum(unsigned int num)
{
	unsigned int	divisor = 1000000000; //Max int = 2,147,483,647 unsigned int = 4294967294
	unsigned int	suma{0};
	
	while (num / divisor == 0)
		divisor /= 10;
	while (divisor != 0)
	{
		suma += num / divisor;
		num %= divisor;
		divisor /= 10;
	}
	return (suma);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	std::cout << "La Suma de todos los digitos de " << argv[1] << " es: " << digit_sum(atoi(argv[1])) << std::endl;
	return (0);
	}