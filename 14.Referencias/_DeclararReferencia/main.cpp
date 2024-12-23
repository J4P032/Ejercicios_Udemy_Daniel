
#include <iostream>

/*Hay que declarar una variable referencia de la variable dada value1.
La variable referencia se llamará ref_value1.
No se puede modificar el nombre de la funcion que dan */

void refs(){
	int value1{33};
	int& ref_value1 = value1;
	std::cout << value1 << ref_value1;
}

int main(void)
{
	refs();
	return (0);
}