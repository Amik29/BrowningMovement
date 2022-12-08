#pragma once
#include "WaterEnviroment.h"
class HeatedWaterEnviroment :
    public WaterEnviroment
{
    void ModulateBrowningMovement(sf::RenderWindow &window) override;
};

