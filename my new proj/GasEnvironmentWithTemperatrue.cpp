#include "GasEnvironmentWithTemperatrue.h"

void GasEnvironmentWithTemperatrue::ModulateBrowningMovement(sf::RenderWindow& window)
{
    
       
        std::cout << "Write count of molecules: ";
        std::cin >> countOfMolecules;
        std::cout << "Write temperature in celcies: ";
        std::cin >> temperature;
        std::vector<Molecule*> envmol;


        for (int i = 0; i < countOfMolecules; i++) {

            envmol.push_back(new MoleculeGas(25));
        }


        while (window.isOpen())
        {
            window.clear(sf::Color(230, 248, 255));
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            for (int i = 0; i < envmol.size(); i++) {
                for (int j = 0; j < envmol.size(); j++) {

                    if (i != j) (*envmol[i]).CollisionLeoJo(*envmol[j],temperature);
                }
            }


            for (int i = 0; i < envmol.size(); i++) {
                (*envmol[i]).updateMolecule();
                (*envmol[i]).draw(window);
            }


            window.display();
        }
    


}
