#include <iostream>
#include "exercise.h"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1); //1 codigo de error.
	
	DayOfWeek 	mi_dia;
	int			valor = atoi (argv[1]); //no puedo hacer case "Lunes" o un c-string. Tiene que ser enumerado.
	switch(valor){
		case 1 : 
			mi_dia = static_cast<DayOfWeek>(0); //tambien funciona así (no mi_dia = 0;). recordar que 0 es el incial si no se especifica.
		break;
		
		case 2 :
			mi_dia = DayOfWeek::Tuesday;
		break;

		case 3 :
			mi_dia = DayOfWeek::Wednesday;
		break;

		case 4 :
			mi_dia = DayOfWeek::Thursday;
		break;

		case 5 :
			mi_dia = DayOfWeek::Friday;
		break;

		case 6 :
			mi_dia = DayOfWeek::Saturday;
		break;

		case 7 :
			mi_dia = DayOfWeek::Sunday;
		break;

		default :
		return (1); //error. input no valido. si no entraría y daría Monday (no se por que)
	}
	
	print_day(mi_dia);
	return (0);
}