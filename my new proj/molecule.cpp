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

void Molecule::CollisionLeoJo(Molecule& other,int temperature)
{
	double includingTempVelocity;
	double dyCapPositive = 0.3;
	double dyCapNegative = -0.3;
	if (temperature == 36) includingTempVelocity = 1;
	else {
		
		if (temperature != 36) {
			includingTempVelocity = (double)temperature /  36.;

			dyCapPositive *= includingTempVelocity;
			dyCapNegative *= includingTempVelocity;
		}
	}

	double vec_x = this->x - other.x;
	double vec_y = this->y - other.y;


	if (dy > dyCapPositive) dy = 0.01 * includingTempVelocity;
	if (dy < dyCapNegative) dy = -0.01*includingTempVelocity;


	double length = sqrt(vec_x * vec_x + vec_y * vec_y);

	if (length >= 400) return;
	else if (length < 300 && length>150) {
		if (x < other.x) dx += 0.00001 * includingTempVelocity;
		else dx -= 0.00001 * includingTempVelocity;
		if (y < other.y) dy += 0.00001 * includingTempVelocity;
		else dy -= 0.00001 * includingTempVelocity;
	}
	else {
		if (dx > 0 && other.dx > 0 || dx<0 && other.dx < 0) {
			if (dy > 0 && other.dy > 0) {
				dy -= 0.00001 * includingTempVelocity;
				other.dy += 0.00001 * includingTempVelocity;
			}
			if (dy < 0 && other.dy < 0) {
				dy += 0.00001 * includingTempVelocity;
				other.dy -= 0.00001 * includingTempVelocity;
			}
			if (dy < 0 && other.dy>0) {
				dy -= 0.000001 * includingTempVelocity;
				other.dy += 0.00001 * includingTempVelocity;

			}
			if (dy > 0 && other.dy < 0) {
				dy += 0.000001 * includingTempVelocity;
				other.dy -= 0.000001 * includingTempVelocity;
			}
		}
		if (dx < 0 && other.dx > 0 || dx > 0 && other.dx < 0) {
			if (dy > 0 && other.dy > 0) {
				dy -= 0.00001 * includingTempVelocity;
				other.dy += 0.00001 * includingTempVelocity;
			}
			if (dy < 0 && other.dy < 0) {
				dy += 0.00001 * includingTempVelocity;
				other.dy -= 0.00001 * includingTempVelocity;
			}
			if (dy < 0 && other.dy>0) {
				dy -= 0.000001 * includingTempVelocity;
				other.dy += 0.00001 * includingTempVelocity;

			}
			if (dy > 0 && other.dy < 0) {
				dy += 0.000001 * includingTempVelocity;
				other.dy -= 0.000001 * includingTempVelocity;
			}

		}

		if (abs(dy)>0.5) std::cout << dy<< "\n";
	}



	//std::cout << length;


}
