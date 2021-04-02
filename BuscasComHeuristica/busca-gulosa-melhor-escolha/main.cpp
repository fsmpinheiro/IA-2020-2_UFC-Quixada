#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

#include <city.h>
#include <transitionto.h>
#include <mapOfAStates.h>


// Nome: Samuel Marques Pinheiro, Francisco .
// Matrícula: 383860

using namespace std;

/*  Na main eu abro o arquivo para receber a descição do mapa, guardando todas as cidade em
 *  meuMapa, quando chego ao fim do arquivo, eu dou início à busca.
 *   Para encerrar a descrição do mapa eu sinalizo com o caractére: 0
*/

int main(){

    ifstream cidadesTXT = ifstream("../dados/cidades.txt");
    ifstream mapaTXT = ifstream("../dados/mapa.txt");

    //MapRomain();
    MapOfAStates mapOfRomain = * new MapOfAStates();

    /* Carregando e gerando vertices (cidades) a partir do arquivo*/
    if(!cidadesTXT){
        cout << "Arquivo cidades.txt que lista as cidades não encontrado." <<endl<<endl<<endl;
    } else {
        string str_cidade;
        int _m = 1;
        int iterador = 0;

        if ( _m != 0 ) {
            while ( _m != 0 && cidadesTXT >> str_cidade >> _m) {
                City * _cidade = new City( iterador, str_cidade, nullptr, 0 );
                        //cout << _cidade->getNome() <<" criada\n";
                    _cidade->setAdjacencias(new vector<TransitionTo *>);
                    //_cidade->setAdjacentCityes(& new vector<TransitionTo *>  );



                mapOfRomain.addCityeInVector( _cidade);
                iterador++;
                        //MapRomain().addCityeInVector( _cidade  );
                        //cout << "Tamanho do vetor: " << MapRomain().sizeOfVectorOfCyties() <<"\n\n";
                        //mapaDaRomenia.vectorAddCitye(cidade);
                        //cout << "Tamanho do vetor: " << mapOfRomain.sizeOfVectorOfCyties() << "\n";
            }
                        //cout << "\n 'cidades.txt' lido por completo\n";
        }
    }

                    /*cout << "\ncidadetest->getNome()" << endl;
                    cout << mapOfRomain.getCityByName( "Arad" )->getNome() << "\n\n";

                    cout << "\ncidadetest->getNome()" << endl;
                    cout << mapOfRomain.getCityByName( "Iasi" )->getNome() << "\n\n";*/


            /* Carregando e gerando arestas (estradas/transições) a partir do arquivo*/
        if(!mapaTXT) {
            cout << "Arquivo mapa.txt que descreve as transições no mapa não encontrado." <<endl<<endl<<endl;
            } else {

                int _n = 1, _distancia = -1;
                string  _origem, _destino;

                if( _n != 0){
                    while ( _n != 0 && mapaTXT >> _origem >> _destino >> _distancia >> _n) {

                        TransitionTo * _tempTransition = new TransitionTo( _origem /*_origem.append("-").append(_destino)*/,
                                                                           mapOfRomain.getCityByName( _destino ) , _distancia );

                        //cout << "Transição: "<< _tempTransition->getOrigem() <<" a distância será: " <<_tempTransition->getDistancia() << "\n";

                        //mapOfRomain.getCityByName( _origem )->addAdjacentCity( _tempTransition );
                        //mapOfRomain.getCityByName( _origem )->adjacencias->push_back(_tempTransition);

                        City * _tempCity = mapOfRomain.getCityByName( _origem );
                        _tempCity->addAdjacentCity( _tempTransition );

                        //mapOfRomain.getCityByName(_origem)->addAdjacentCity( mapOfRomain.getCityByName(_origem)->getAdjacentCityes(), _tempTransition);
                    }
                    cout << "\n 'mapa.txt' lido por completo\n";
                }
            }












    cout << "\n \n";
    return 0;
}
