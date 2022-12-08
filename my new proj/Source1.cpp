#include <SFML/Graphics.hpp>
#include "molecule.cpp"

class PieceOfDust :public Molecule {
public:
	PieceOfDust(int m) :Molecule(m) 
	{
		mymol.setFillColor(sf::Color(255, 235, 205));
	};

};