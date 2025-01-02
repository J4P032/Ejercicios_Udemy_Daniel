#include "exercise.h"

/*hacer una funcion que pasado un unsigned long long int diga si 
el numero es un palindromo (invertido el numero queda igual. Es simetrico)
La funcion se ha de llamar "bool is_palindrome(unsigned long long int num)"
y debe ser dividida en un exercise.h y un exercise.cpp*/

bool is_palindrome(unsigned long long int num)
{
	unsigned short int		digito;
	unsigned long long int	numero_original = num;
	unsigned long long int	numero_invertido = 0;
	
	while (num / 10 != 0) 
	{
		digito = num % 10; //sacamos el numero mas a la derecha.
		numero_invertido = numero_invertido * 10 + digito;
		num /= 10;
	}
	numero_invertido = numero_invertido * 10 + num;  //el ultimo digito se escapa del while. Lo tratamos aqui.
	if (numero_invertido == numero_original)
		return (true);
	else
		return (false);
}