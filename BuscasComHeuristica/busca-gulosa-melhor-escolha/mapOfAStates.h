#ifndef TRANSITION_H
#define TRANSITION_H

#include <iostream>
#include <vector>

#include <city.h>
#include <transitionto.h>

using namespace std;

/*  A classe MapOfAStates representa as arestas
*   do um grafo, neste caso, o nosso mapa pode
*   ser visto como um grafo. É na classe Transition
*   que determino a lista de aréstas presentes
*   no nosso grafo.
*/

class MapOfAStates{

private:
    vector< City*> vectorOfCityes;

public:
    MapOfAStates();
    ~MapOfAStates();

    void addCityeInVector(  City * &_cidade );
    vector<City *> getVectorOfCityes();


    City * getCityByName( string _cidade );
    int sizeOfVectorOfCyties();

    TransitionTo * getAllAdjacents(vector<TransitionTo *> _vectorOfAdjacences );

};

#endif // TRANSITION_H
