#ifndef CITY_H
#define CITY_H

#include<iostream>
#include<vector>

#include"transitionto.h"

using namespace std;

class TransitionTo;

class City{
private:
    int numOrdem;
    string nome;
    int valHeuristic;
    vector<TransitionTo *>* adjacencias;



public:

    City();
    City( int _numOrdem, string _nome, vector<TransitionTo*> * _adjacencias, int _valHeuristic = 0);
    ~City();

    string getNome() const;
    void setNome( string _nome );

    int getValorHeuristic() const;
    void setValorHeuristic(int _valorHeuristic );


    void setAdjacencias(vector<TransitionTo *> * _adjacencias );
    void addAdjacentCity(  TransitionTo * _transition);
    //vector<TransitionTo *> getAdjacentCityes();
    vector<TransitionTo *> getVectorOfAdjacencias();



    int getNumOrdem() const;
    void setNumOrdem(int _numOrdem );


};
#endif // CITY
