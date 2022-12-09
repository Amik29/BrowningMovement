#include "molecule.h"

Molecule::Molecule(int m)
{
	this->m = m;
	mymol.setRadius(m);
}


void Molecule::CheckCollisionWithBoundaries()
{
	if (x > 800) x = 0;
	if (y > 800) y = 0;
	if (x < 0) x = 800;
	if (y < 0) y = 800;
}

void Molecule::CheckCollisionWithMolecules(std::list<Molecule>& mainmolecules)
{
	for (std::list<Molecule>::iterator i = mainmolecules.begin(); i != mainmolecules.end(); ++i)
		for (std::list<Molecule>::iterator j = mainmolecules.begin(); j != mainmolecules.end(); ++j)
			if (i != j)
			{
				float d = sqrt((i->x - j->x) * (i->x - j->x) + (i->y - j->y) * (i->y - j->y));
				if (d < i->m + j->m)
				{
					float f = 50 * (i->m + j->m - d);
					i->dx += f * (i->x - j->x) / d / i->m;
					i->dy += f * (i->y - j->y) / d / i->m;
					j->dx -= f * (i->x - j->x) / d / j->m;
					j->dy -= f * (i->y - j->y) / d / j->m;
				}
			}
}

void Molecule::updateMolecule()
{
	x += dx;
	CheckCollisionWithBoundaries();
	y += dy;
	CheckCollisionWithBoundaries();
	mymol.setPosition(x, y);
}

void Molecule::draw(sf::RenderWindow& window)
{
	window.draw(mymol);
}
