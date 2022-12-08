#pragma once
#include "Environment.h"
class WaterEnviroment :
    public Environment
{
    void ModulateBrowningMovement(sf::RenderWindow &window) override;
};

