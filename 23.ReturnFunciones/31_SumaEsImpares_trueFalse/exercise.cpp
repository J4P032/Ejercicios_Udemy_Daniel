
#include "exercise.h"
#include <iostream>

/* Escribir una funcion que compruebe que la suma de todos sus elementos
sea par o impar. Si es impar almacenara un false dentro de una bool que ha 
sido pasado por parametro llamada "result". Si es par, debes poner un true
la funcion se llamara como marca el ejercicio*/

/*como no quiero sumarlos porque podria ser mayor la suma que los ints
voy a contar cuantos impares hay y si son par entonces la suma sera par, pero
si son impar, la suma sera impar. Asi no creo un long long*/
void is_sum_even(int data[], unsigned int size, bool& result){
	size_t	cuantos_impares = 0;
	
	for (size_t i{}; i < size; ++i)
		cuantos_impares += (data[i] % 2 == 0) ? 0 : 1;
		//cuantos_impares += (data[i] % 2 != 0); //sumara 0 si lo es ya que dara cero y por lo tanto sera un 1 lo de (). y sumara un 1 si lo es por que sera distinto de cero. Mejor que ternario

	std::cout << "impares: " << cuantos_impares << std::endl;
	result = (cuantos_impares % 2 == 0) ? true : false;
	//result = !(cuantos_impares % 2); //si es par sera cero lo de (), y si es impar el resto sera 1 por lo que se asignara el contrario por el operador ! 0 = 1, 1 = 0
}