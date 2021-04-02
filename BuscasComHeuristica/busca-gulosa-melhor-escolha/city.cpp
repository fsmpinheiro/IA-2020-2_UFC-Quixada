#include "city.h"

City::City(int _numOrdem, string _nome, vector<TransitionTo*>* _adjacencias, int _valorHeuristic)
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



void City::addAdjacentCity(TransitionTo * _transition )
{
    if( _transition != nullptr ){
                        //cout <<"antes da inserção: " <<  this->adjacencias->size() ;
        this->adjacencias->push_back(_transition);
                        //cout <<" - depois da inserção: " <<  this->adjacencias->size() <<"\n";
    }else{
        cout << "addAdjacentCity recebeu um vetor é nulo...\n";
    }
}

void City::setAdjacencias(vector<TransitionTo *> * _vectorOfRoads)
{
    this->adjacencias = _vectorOfRoads;
}

//vector<TransitionTo *> *City::getVectorOfAdjacencias()
//{
//    return this->adjacencias;
//}
vector<TransitionTo *> City::getVectorOfAdjacencias()
{
    return *this->adjacencias;
}

int City::getNumOrdem() const
{
    return numOrdem;
}

void City::setNumOrdem(int _numOrdem)
{
    numOrdem = _numOrdem;
}
