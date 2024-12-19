
#include <iostream>
#include <ctime>

/*El programa generara dos numeros enteros aleatorios entre 0~199 y pedira
al usuario que responda el resultado de operaciones aleatorias (sumar, restar o
multiplicar). Luego le pedira si quiere seguir jugando */

int	main(void)
{
	bool			play;
	unsigned int	rand_num1;
	unsigned int 	rand_num2;
	size_t			rand_op;
	char			operators[] = "+-*";
	int				solution;
	int				answer;
	char			reply;


	play = true;
	std::srand(std::time(0)); //la semilla del random para que no sea siempre el mismo en ejecucion
	std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;
	while (play)
	{
		rand_num1 = std::rand() % 200; //0~199
		rand_num2 = std::rand() % 200;
		rand_op = std::rand() % 3;
		switch (rand_op)
		{
			case 0:
				solution = rand_num1 + rand_num2;
				break;
			case 1:
				solution = rand_num1 - rand_num2;
				break;
			case 2:
				solution = rand_num1 * rand_num2;
				break;
			default:
				std::cout << "Error" << std::endl;
				break;
		}

		std::cout << "What's the result of " << rand_num1 << " " << operators[rand_op] << " " <<
			rand_num2 << " : ";
		if(!(std::cin >> answer)) //si no pongo if, al meter una letra hace un bucle infinito
		{
			std::cin.clear(); //limpia estado del error
			std::cin.ignore(1000, '\n'); //descarta hasta 1000 chars o hasta salto de linea en buffer de entrada.
			continue; //vuelve al ciclo inicial del bucle
		}
		if (answer == solution)
			std::cout << "Congratulations! You got the result " << solution << " right!" << std::endl;
		else
			std::cout << "Naah! the correct result is : " << solution << std::endl; 
		std::cout << std::endl;
		std::cout << "Do  you want to try again ? (Y | N) : ";
		std::cin >> reply;
		if ((reply == 'n') || (reply == 'N'))
			break ;
	}
	std::cout << "See you later!" << std::endl;
	return (0);
}