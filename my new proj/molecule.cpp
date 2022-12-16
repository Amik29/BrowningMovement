#include "molecule.h"
#include <iostream>
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

void Molecule::CollisionLeoJo(Molecule& other)
{
	double vec_x = this->x - other.x;
	double vec_y = this->y - other.y;

	double length = sqrt(vec_x * vec_x + vec_y * vec_y);

	if (length >= 500) return;
	else if (length < 500 && length>100) {
		if (x < other.x) dx += 0.00001;
		else dx -= 0.00001;
		if (y < other.y) dy += 0.00001;
		else dy -= 0.00001;
	}
	else {
	}



	//std::cout << length;


}
