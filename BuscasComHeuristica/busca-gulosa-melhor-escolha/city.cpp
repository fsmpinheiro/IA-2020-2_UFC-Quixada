#include "city.h"


City::City()    /*Construtor com valores nulos*/
{
    this->numOrdem = -9999;
    this->nome = "nullCity";
    this->adjacencias = nullptr;
    this->valHeuristic = -9999;
}

City::City(int _numOrdem, string _nome,
           vector<TransitionTo *> *_adjacencias, int _valorHeuristic)
{
    this->numOrdem = _numOrdem;
    this->nome = _nome;
    this->adjacencias = _adjacencias;
    this->valHeuristic = _valorHeuristic;

}

City::~City( )
{
    std::cout << this->getNome() << " diz bye bye\n";
}

string City::getNome() const
{
    return nome;
}

void City::setNome( std::string _nome)
{
    nome = _nome;
}

int City::getValorHeuristic() const
{
    return valHeuristic;
}

void City::setValorHeuristic(int _valorHeuristic)
{
    valHeuristic = _valorHeuristic;
}

int City::getNumOrdem() const
{
    return numOrdem;
}

void City::setNumOrdem(int _numOrdem)
{
    numOrdem = _numOrdem;
}
