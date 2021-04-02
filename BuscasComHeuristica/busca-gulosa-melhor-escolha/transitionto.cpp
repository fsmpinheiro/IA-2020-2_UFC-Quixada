#include "transitionto.h"

TransitionTo::TransitionTo( string _origem, City* _destino , int _distancia)
{
    if( _destino != nullptr){
        this->origem = _origem;
        this->destino = _destino;
        this->distancia = _distancia;
    }
}

TransitionTo::~TransitionTo(){
}

string TransitionTo::getOrigem()    //retorna o nome da aresta, a cidade de origem
{
    return  this->origem;
}

void TransitionTo::setOrigem(string _origem)
{
    this->origem = _origem;
}

City *TransitionTo::getDestino()
{
    return destino;
}

void TransitionTo::setDestino(City *_destino, int _distancia)
{
    if ( _destino != nullptr ){
        this->origem = _destino->getNome() ;
        this->destino = _destino;
        this->distancia = _distancia;
    }
}

int TransitionTo::getDistancia()
{
    return this->distancia;
}

void TransitionTo::setDistancia(int _distancia)
{
    this->distancia = _distancia;
}
