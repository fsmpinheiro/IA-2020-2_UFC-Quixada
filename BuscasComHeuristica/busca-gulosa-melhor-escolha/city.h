#ifndef CITY_H
#define CITY_H

#include<iostream>
#include<vector>

#include"transitionto.h"

using namespace std;

//template <typename City>

class TransitionTo;

class City{
private:
    int numOrdem;
    string nome;
    int valHeuristic;
    vector<TransitionTo*>* adjacencias;

public:

    City();
    City( int _numOrdem, string _nome, vector<TransitionTo*>* _adjacencias = nullptr, int _valHeuristic = 0);
    ~City();

    string getNome() const;
    void setNome( string _nome );

    int getValorHeuristic() const;
    void setValorHeuristic(int _valorHeuristic );

    vector<TransitionTo*>* getadjacentCityes();
    void setAdjacentCityes( vector<TransitionTo *>* _vectorOfRoads );


    int getNumOrdem() const;
    void setNumOrdem(int _numOrdem );
};
#endif // CITY
