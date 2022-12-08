#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include "GasEnviroment.h"
int main()
{
	srand(time(NULL));
    int num_of_sreda;
	std::cout << "¬ведите номер системы ( газ, газ сжатый, вода, вода нагрета€)";
    std::cin >> num_of_sreda;
	sf::RenderWindow window(sf::VideoMode(800, 800), "sfml");
	switch (num_of_sreda)
	{
	case(1):
		GasEnviroment v;
		v.ModulateBrowningMovement(window);
	}
}