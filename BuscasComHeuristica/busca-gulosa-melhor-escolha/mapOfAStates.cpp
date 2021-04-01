#include "mapOfAStates.h"
#include "city.h"



                                                                //Construtor
MapOfAStates::MapOfAStates(){
}

                                                                //Destrutor
MapOfAStates::~MapOfAStates(){
}


vector<City *> MapOfAStates::getVectorOfCityes(){
    return vectorOfCityes;
}

void MapOfAStates::addCityeInVector(  City  * &_cidade ){
    this->vectorOfCityes.push_back( _cidade );
                                                                //    int sizo = vectorOfCityes.size();
                                                                //    std::cout << "tamanho de sizo: " << sizo <<"\n\n";
}

City * MapOfAStates::getCityByName(std::string _cidade){
    int vectorLength = this->vectorOfCityes.size();
    for ( int i = 0; i < vectorLength; i++){
        if( this->vectorOfCityes[i]->getNome() == _cidade ){
                                                                //cout << "Encontrei " << this->vectorOfCityes[i]->getNome() <<"\n";
            return this->vectorOfCityes[i];
            break;
        }
    }
                                                                //cout << _cidade <<" não está na no vetor. \n";
    City * _nullCity = new City();
    return _nullCity ;
    _nullCity->~City();
                                                                //cout << "depois do break\n;";

}

int MapOfAStates::sizeOfVectorOfCyties(){
    return (int) vectorOfCityes.size();
}
