#include <iostream>
#include "exercise.h"

/* hacer un enum de los dias de la semana en ingles y nuestro programa
dirá "Today is (el dia)" cuando se le pase dicho dia a la funcion
la funcion ya viene definida y hay que poner en la clase el enum. La
declaracion de la funcion ya viene definida */

void print_day(DayOfWeek day){
    switch(day){
		case    DayOfWeek::Monday : 
            std::cout << "Today is Monday";
        break;

        case	DayOfWeek::Tuesday : 
            std::cout << "Today is Tuesday";
        break;

        case   DayOfWeek::Wednesday : 
            std::cout << "Today is Wednesday";
        break;

        case   DayOfWeek::Thursday : 
            std::cout << "Today is Thursday";
        break;

        case    DayOfWeek::Friday : 
            std::cout << "Today is Friday" ;
        break;

        case    DayOfWeek::Saturday : 
            std::cout << "Today is Saturday";

         case    DayOfWeek::Sunday : 
            std::cout << "Today is Sunday" ;
        break;

        default : 
        std::cout << "No day";
    }
}
