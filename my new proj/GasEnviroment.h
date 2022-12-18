#pragma once
#include "Environment.h"
#include "MoleculeGas.h"
#include <vector>
#include <iostream>
class GasEnviroment :
    public Environment
{
public:
    GasEnviroment() :Environment() {

    }
    virtual void ModulateBrowningMovement(sf::RenderWindow& window) override;

};

