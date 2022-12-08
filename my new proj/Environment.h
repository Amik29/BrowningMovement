#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
class Environment
{
protected:
	int countOfMolecules;
public:
	Environment();
	virtual void ModulateBrowningMovement(sf::RenderWindow &window) = 0;

};

	