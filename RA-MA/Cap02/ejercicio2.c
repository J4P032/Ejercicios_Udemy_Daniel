#define _CRT_NONSTDC_NO_DEPRECATE //para poder usar write en vez de _write. Ha de estar arriba encima de los includes
#define _CRT_SECURE_NO_WARNING
#include <io.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, ""); //estoy y su include hace que se pueda meter carácteres raros como la ñ. LC_ALL todos los aspectos locales caracteres, fechas, etc.. "" configuración predeterminada del sistema.
	write(1, "Los programas escritos en C\nson portables en c\242digo fuente.", 59); //\242 es ó en ASCII decimal. si no está el setlocale
	printf("\n ver si imprime esto á é í ó ú y ñ");
	return (0);
}