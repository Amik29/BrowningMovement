#pragma once
#include "GasEnviroment.h"
class GasEnvironmentWithTemperatrue :public GasEnviroment
{

	int temperature;
public:
	virtual void ModulateBrowningMovement(sf::RenderWindow& window) override;
	GasEnvironmentWithTemperatrue() : GasEnviroment() {};


};

