
#include "exercise.h"
#include <iostream>

/* nos dan una funcion:

const double* find_max_address(const double scores[], size_t count){
size_t max_index{};
double max{};
for(size_t i{0}; i < count ; ++i){
if(scores[i] > max){
 max = scores[i];
 max_index = i;
 }
 }
return &scores[max_index];
}

que funciona bien para numeros positivos, pero no para engativos, ya que 
double array[] {-3.0,-2.0,-5.0}; devolvería -3, y no el -2 que es el mayor.
el problema radica en que ningun numero negativo es mayor que cero, asi que
jamas entrara en el if, y devolvera el indice cero siempre, que en el caso del ejemplo
es -3.0.
Usaremos no size_t sino unsigned int para el contador.

el arreglo es facil, pero lo interesante esta en el main()
*/

 const double* find_max_address(const double scores[], unsigned int count){
    unsigned int max_index{};
    double max = scores[0];
    
    for(unsigned int i{1}; i < count ; ++i){
       
	   
	    if(scores[i] > max){
            max = scores[i];
            max_index = i;
        }
    }
    return &scores[max_index];
}