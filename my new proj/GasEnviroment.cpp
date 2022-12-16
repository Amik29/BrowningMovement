#include "GasEnviroment.h"
#include "MoleculeGas.h"
#include <vector>
#include <iostream>
void GasEnviroment::ModulateBrowningMovement(sf::RenderWindow& window)
{
	countOfMolecules = 10;
	
	std::vector<Molecule*> envmol;
    

	for (int i = 0; i < countOfMolecules; i++) {
        
		envmol.push_back(new MoleculeGas(20));
	}


        while (window.isOpen())
        {
            window.clear(sf::Color(230,248,255));
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            for (int i = 0; i < envmol.size(); i++) {
                for (int j = 0; j < envmol.size(); j++) {

                    if (i != j) (*envmol[i]).CollisionLeoJo(*envmol[j]);
                }
            }


            for (int i = 0; i < envmol.size();i++) {
                (*envmol[i]).updateMolecule();
                (*envmol[i]).draw(window);
            }

            
            window.display();
        }
}