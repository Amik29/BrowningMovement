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
