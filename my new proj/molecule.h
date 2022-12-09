#include <SFML/Graphics.hpp>
#include <random>
#include <list>
class Molecule
{
public:
	Molecule(int m);
	void CheckCollisionWithBoundaries();
	void CheckCollisionWithMolecules(std::list<Molecule> &mainmolecules);
	void updateMolecule();
	void draw(sf::RenderWindow &window);

protected:
	int m;
	double dx;
	double x;
	double y;
	double dy;
	sf::CircleShape mymol;

};