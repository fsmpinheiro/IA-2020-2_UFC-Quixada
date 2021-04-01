#ifndef TRANSITIONTO_H
#define TRANSITIONTO_H

#include<iostream>
#include<string>
#include <vector>

#include<city.h>

using namespace std;

class City;

class TransitionTo{

private:
    string origem;
    //TransitionTo * destino;
    City * destino;
    int distancia;


public:
    TransitionTo( string _nome, City * _destino = nullptr, int _distancia = 0);
    ~TransitionTo();

    string getOrigem();
    void setOrigem( string _origem);

    City * getDestino();
    void setDestino( City * _destino, int _distancia);

    int getDistancia();
    void setDistancia(int _distancia);
};

#endif // TRANSITIONTO_H
