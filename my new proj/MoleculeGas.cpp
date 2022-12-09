#include "MoleculeGas.h"

MoleculeGas::MoleculeGas(int m):Molecule(m)
{
        mymol.setFillColor(sf::Color(228, 225, 255));
        dx = rand() % 2 - 0.5;
        dy = rand() % 2-0.5;
        x = rand() % 800;
        y = rand() % 800;
        mymol.setPosition(x, y);
}
