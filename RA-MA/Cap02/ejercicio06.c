#include <stdio.h>

typedef struct datos
{
	char*	nombre;
	char*	direccion;
	int*	telefono;
}persona;

int	main(void)
{
	persona hombre; //Para poder usar el alias persona, tiene que estar como TYPEDEF si no, hay que usar struct datos hombre;

	hombre.nombre = "Javier";
	hombre.direccion = "Mi calle";
	int telefono = 66555555;
	hombre.telefono = &telefono; //este es un puntero en el struct asi que hay que pasarle la direccion de memoria. Los otros son strings

	printf("%s\n", hombre.nombre);
	printf("%s\n", hombre.direccion);
	printf("%d", *hombre.telefono);
}