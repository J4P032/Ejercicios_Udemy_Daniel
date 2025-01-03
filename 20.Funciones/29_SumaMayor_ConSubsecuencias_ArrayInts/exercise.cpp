
#include "exercise.h"
#include <limits>

/* Hacer una funcion que calcule el valor maximo de una suma de un array
de numeros de enteros. Donde el array pasado puede ser subsecuenciado.
ej: 4, 1, -32. Su suma completa sería -27, pero si cogemos la subsecuencia
4, 1 serían 5, o sea que esa sería la solución.
una subsecuencia de 1,2,3,4,5,6 puede ser 1 solo, 4, solo.. 4,5,6 también
pero no puede ser 1,3,4,5 por que nos saltamos un número.
las funciones vienen definidas en el exercise.h 
limits está incluido en el include, o sea que usarlo!*/

/*
Mi idea es sacar subsecuencias entre numeros negativos que haya
y sumarlos en variables. Y ver cual es mayor. Pero puede haber n subsecuencias
El problema es que puede haber un 6,1,1,-2,2,3,-20* en donde 6,1,1 sumaria 8
y 2,3 sería 5, pero el completo 6,1,1,-2,2,3 serían 11 y ese sería la solución

Entonces hay que tomar el algoritme de Kadane: se va sumando subsecuencias positivas solamente
e incluyendo tambien con numeros negativos, y comprobamos si uno es mayor que otro en cada ciclo.
si la suma con negativos pasa a ser negativa en una iteración la reseteamos a cero ya que no tiene sentido
partir de un numero negativo para la siguiente suma con el siguiente positivo
Tenemos en cuenta también si el valor de la suma es mayor que el INT_MAX, ya que tiene que devolver
un numero entero dentro del rango */

int max_subsequence_sum(int sequence[], unsigned int size){

	long long int 	suma = 0; //la suma de muchos ints puede ser mayor que INT_MAX
	long long int	suma_aux = 0;
	long long int	suma_con_negativos = 0;
	long long int	suma_con_negativos_max = 0;
	const int		maximo = std::numeric_limits<int>::max(); //2147483647 INT_MAX no se puede usar por que esta en biblio climits y no limits

	for (unsigned int i{0}; i < size; ++i)
	{
		if ((i > 1) && (sequence[i - 1] < 0)) //en caso de salir break por overflow i-1 no sería negativo.
			suma_aux = 0; //reiniciamos para siguiente subsecuencia
		else if ((i > 1) && sequence[i - 1] > 0)
			suma_aux = sequence[i - 1]; //en caso de break por overflow retomamos dicho valor para no perderlo por que i se lo ha pasado por el ++i del for
		while ((sequence[i] >= 0) && (i < size))
		{
			suma_aux += sequence[i];
			suma_con_negativos += sequence[i];
			
			//desbordamiento de int de suma con negativos
			if (suma_con_negativos > maximo)
			{
				if ((suma_con_negativos - sequence[i]) > suma_con_negativos_max)
					suma_con_negativos_max = suma_con_negativos - sequence[i];
				suma_con_negativos = sequence[i]; //no puedo resetearlo a 0 por que se perdería el valor de sequence[i]
			}
			
			//desbordamiento de int de suma con solo positivos.
			if (suma_aux > maximo)
				break ;
			i++; //el i del for conservara este cambio
		}		
		if (i < size) //hay un negativo o si sale del bucle por desbordamiento con el break..
			suma_con_negativos = (suma_con_negativos + sequence[i] < 0) ? 0 : suma_con_negativos + sequence[i]; //si negativo reinicio a cero.
		
		//Si desborda ha salido con el break pero todavia tiene el valor mayor a MAX_INT. devolvemos el valor dentro de int. No overflow
		if (suma_aux > maximo)
			suma_aux = suma_aux - sequence[i]; 
		
		//suma_aux suma entre valores negativos o hasta que suma no sea mayor que MAX_INT. Actualizamos la mayor de todas.
		if (suma_aux > suma)
			suma = suma_aux;
		
		//suma_con_negativos puede resetearse a cero si encuentra un negativo. Aquí tomamos su valor maximo.
		if (suma_con_negativos > suma_con_negativos_max)
			suma_con_negativos_max = suma_con_negativos;
		
		//Comparamos subsecuencias incluyendo negativos con subsecuencias de solo positivos y tomamos el valor mayor.
		if (suma_con_negativos_max > suma)
			suma = suma_con_negativos_max;
	}

	return (suma);
}