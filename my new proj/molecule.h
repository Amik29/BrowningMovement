#pragma once
#include <SFML/Graphics.hpp>
#include <random>
#include <math.h>
class Molecule
{
public:
	Molecule(int m);
	void CheckCollisionWithBoundaries();
	void updateMolecule();
	void draw(sf::RenderWindow &window);
	void CollisionLeoJo(Molecule &other,int temperature = 36);
protected:
	int m;
	double dx;
	double x;
	double y;
	double dy;
	sf::CircleShape mymol;

};