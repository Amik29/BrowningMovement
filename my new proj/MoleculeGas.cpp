#include "MoleculeGas.h"

MoleculeGas::MoleculeGas(int m):Molecule(m)
{
    int a = rand() % 101;
    int b = rand() % 101;
    if (a > 50) a = 1;
    else a = -1;
    if (b > 50) b = 1;
    b = -1;
        mymol.setFillColor(sf::Color(228, 225, 255));
        dx = 0.0001 * (rand() % 101)*a;
        dy = 0.0001 * (rand() % 101)*b;
        x = rand() % 800;
        y = rand() % 800;
        mymol.setPosition(x, y);
}
