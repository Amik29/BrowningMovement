#include "GasEnviroment.h"
#include "MoleculeGas.h"
#include <list>
#include <iostream>
void GasEnviroment::ModulateBrowningMovement(sf::RenderWindow& window)
{
	countOfMolecules = 10;
	
	std::list<Molecule*> envmol;
    

	for (int i = 0; i < countOfMolecules; i++) {
        
		envmol.push_back(new MoleculeGas(20));
	}


        while (window.isOpen())
        {
            window.clear();
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            for (auto it = envmol.begin(); it != envmol.end(); it++) {
                (* it)->updateMolecule();
                (* it)->draw(window);
            }
            
            window.display();
        }
}