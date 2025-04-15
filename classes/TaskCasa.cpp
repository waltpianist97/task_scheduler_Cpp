
#include "TaskCasa.h"


void TaskCasa::esegui(){
    std::cout<<"Il task nella casa e stato eseguito."<<std::endl;
}

void TaskCasa::mostra_dettagli(){
    std::cout<<"Task id: "<<this->dettagli.id<<", name: "<<this->dettagli.nome<<", descrizione: "<<this->dettagli.descrizione<<", numero stanze "<<this->num_stanze<<std::endl; 
};
