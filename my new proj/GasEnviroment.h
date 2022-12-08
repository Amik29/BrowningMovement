#pragma once
#include "Environment.h"
class GasEnviroment :
    public Environment
{
public:
    GasEnviroment() :Environment() {

    }
    virtual void ModulateBrowningMovement(sf::RenderWindow& window) override;

};

