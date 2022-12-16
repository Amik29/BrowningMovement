#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include "GasEnviroment.h"
int main()
{
	srand(time(NULL));
    int num_of_sreda;
	std::cout << "Choose Environment:\n1 - GasEnvironment\n2 - GasEnvironment with Temperature";
    std::cin >> num_of_sreda;
	sf::RenderWindow window(sf::VideoMode(800, 800), "BrowningMovement");
	
	switch (num_of_sreda)
	{
	case(1):
		GasEnviroment v;
		v.ModulateBrowningMovement(window);
	}
}