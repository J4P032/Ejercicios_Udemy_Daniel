#include <stdio.h>

typedef enum coches 
{
	volvo, renault, citroen, toyota, peugeout, audi, ferrari
}vehiculos;


int main(void)
{
	vehiculos MiCoche;
	long precio[7];
	precio[volvo] = 1;
	precio[renault] = 2;
	precio[citroen] = 3;
	precio[toyota] = 4;
	precio[peugeout] = 5;
	precio[audi] = 6;
	precio[ferrari] = 7;

	MiCoche = toyota;
	printf("el precio de mi coche es %ld", precio[MiCoche]);
	return (0);
}