#include "MoleculeGas.h"

MoleculeGas::MoleculeGas(int m):Molecule(m)
{
   
    mymol.setFillColor(sf::Color(255, 235, 205));
    dx = rand() % 100 -50;
    dy = rand() % 100 -50;
    x = rand() % 800;
    y = rand() % 800;
    mymol.setPosition(x, y);
}
