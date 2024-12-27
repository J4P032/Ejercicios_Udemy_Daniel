
#include <iostream>
#include <cstring>

/*Hay que formar la frase "The sky is blue" a partir de
4 arrays que tienen dichas palabras. Tiene que hacerse con strncpy.
No se puede modificar el nombre de la funcion que dan */

void extract_message( const char* src1, const char* src2, const char* src3, const char* src4){
	char* result;
	result = new char[20];

	src1 = std::strstr(src1, "the");
	src2 = std::strstr(src2, "sky");
	src3 = std::strstr(src3, "is");
	src4 = std::strstr(src4, "blue");
	char *aux = result; //es necesario crearlo por lo que explico abajo
	
	aux = std::strncpy(aux, src1, 4); 
	aux += 4; //si fuera resultado += 4; y arriba resultado = cpy(resultado, src1,4) perdería la posicion de memoria de resultado y no podría imprimirla luego ni borrarla con delete (memory leak)
	aux = std::strncpy(aux, src2, 4);
	aux += 4;
	aux = std::strncpy(aux, src3, 3);
	aux += 3;
	aux = std::strncpy(aux, src4, 4);
	
	std::cout << "result : " << result; //al apuntar aux al inicio a la misma direccion que result, este se ve afectado y modificado cada vez.
	delete[] result;
}

int main(void)
{
	const char src1[] {"will old space the replace"};
	const char src2[] {"sense sky hit has"};
	const char src3[] {"hello went is get"};
	const char src4[] {"red blue yellow orange"};
	
	extract_message(src1, src2, src3, src4);
	return (0);
}