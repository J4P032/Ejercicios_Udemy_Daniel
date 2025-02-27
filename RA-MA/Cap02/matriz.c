#include <stdio.h>
#include <stdlib.h>

/* va mas alla del ejercicio, ya que piden solo los 10 primeros a partir del 0, yo pongo
los 10 primeros a partir de cualquier número, por lo que calculo el primer impar y luego
muestro los 10 siguientes en el main*/
int	ft_first_odd(int nmb)
{
	int i = 0;
	int number = 1; //porque el primer numero a empezar a contar es el 1
	while (i < nmb)
	{
		number += 2;
		i++;
	}
	return (number);
}

int	main(int argc, char** argv)
{
	int i;
	int number;
	int	*matrix;
	
	matrix = (int*)malloc(10 * sizeof(int));
	if (argc != 2)
		printf("Pasarle argumento inicio numero de 0 a 9");
	printf("Secuencia: ");
	if (atoi(argv[1]) == 0)
		number = 1;
	else
		number = ft_first_odd(atoi(argv[1]));
	for (i = 0; i <= 9; i++)
	{
		matrix[i] = number;
		number += 2;
	}
	printf("La matrix de nums es: ");
	for (i = 0; i < 10; i++)
		printf("%d ", matrix[i]);
	free(matrix);
	return (0);
}