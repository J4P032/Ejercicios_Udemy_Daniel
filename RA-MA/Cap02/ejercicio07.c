#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int	ft_suma(int a, int b, int c, int d, float* media)
{
	int suma;
	suma = a + b + c + d;
	*media = (float)suma / (float)4; //si no ponemos (float) el resultado será un entero y por lo tanto decimal cero cero...
	return (suma);
}

int	main(int argc, char** argv)
{
	setlocale(LC_ALL, ""); //permite tildes
	float media;
	media = 0;
	if (argc != 5)
	{
		printf("escriba 4 números como argumento");
		return (0);
	}
	printf("La suma de %s, %s, %s, %s es: %d\n", argv[1], argv[2], argv[3], argv[4],
		ft_suma(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), &media));
	printf("La media de %s, %s, %s, %s es: %g\n", argv[1], argv[2], argv[3], argv[4], media); //%g borra los ceros posteriores en el decimal
	return (0);
}