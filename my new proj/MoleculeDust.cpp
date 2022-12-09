#include "MoleculeDust.h"

MoleculeDust::MoleculeDust(int m):Molecule(m)
{
    mymol.setFillColor(sf::Color(233, 238, 191));
    dx = 0;
    dy = 0;
    x = 400;
    y = 400;
    mymol.setPosition(x, y);

}
