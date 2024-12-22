
#include <iostream>

/*Se nos pasa un array de enteros y un valor de offset tipo unsigned int
Tenemos que devolver el valor a partir del inicio del array a cual apunta
dicho offset. No se puede modificar el nombre de la funcion que dan */

void shoot_forward( int data[], unsigned int offset)
{
	std::cout << "The element " << offset << " slots away from the beginning is : " << *(data + offset); 
}

int main(void)
{
	int	array[] = {45,7,8,9,4,-9,48,-18,97,24,68,92};
	int	valor;
	int	offset = 7;
	if (offset > (std::size(array) - 1))
		return (0);
	shoot_forward(array, offset);
	return (0);
}