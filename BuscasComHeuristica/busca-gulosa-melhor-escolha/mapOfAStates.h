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
                                                                    //    vector< City*>* vectorOfRoads;


public:
    MapOfAStates();
    ~MapOfAStates();

    void addCityeInVector(  City * &_cidade );
    vector<City *> getVectorOfCityes();

                                                                    //vector<City*> getVectorOfRoads() const;
                                                                    //void setVectorOfRoads(const vector<City*> &value);

    City * getCityByName( string _cidade );
    int sizeOfVectorOfCyties();


                                                                    //    std::vector<City *> getVetorCidades();
                                                                    //    void vectorAddCitye(City* _cidade);


                                                                    //    void setVectorOfCityes(std::vector<City *>* value);
                                                                    //    City* getCityByName(std::string _cidade);
                                                                    //    City* getCityeByNumber(int identificador);
                                                                    //    void setVectorOfCityes(const std::vector<City *> &value);

};

#endif // TRANSITION_H
