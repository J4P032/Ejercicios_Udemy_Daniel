#include <stdio.h>

int ft_potencia(double num, int potencia)
{
	if (potencia > 0)
		num = num * ft_potencia(num, (potencia - 1));
	if (potencia == 0)
		return (1);
	if (potencia < 0)
		return (0);
	return (num);
}

int	main(void)
{
	double a = 1, b = 5, c = 2;
	double resultado;

	resultado = (ft_potencia(b, 2) - 4 * a * c) / (2 * a);
	printf("resultado: %g", resultado);
	return (0);
}