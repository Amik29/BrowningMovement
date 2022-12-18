#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include "GasEnviroment.h"
#include "GasEnvironmentWithTemperatrue.h"
#include <math.h>
int main()
{
	srand(time(NULL));
    int num_of_sreda;
	std::cout << "Choose Environment:\n1 - GasEnvironment\n2 - GasEnvironment with Temperature\n";
    std::cin >> num_of_sreda;
	sf::RenderWindow window(sf::VideoMode(800, 800), "BrowningMovement");
	system("CLS");
	GasEnviroment v;
	GasEnvironmentWithTemperatrue env;
	switch (num_of_sreda)
	{
	case(1):
		v.ModulateBrowningMovement(window);
		break;
	case(2):
		env.ModulateBrowningMovement(window);
	}
}