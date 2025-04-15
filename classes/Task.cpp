
#include "Task.h"


void Task::mostra_dettagli(){
    std::cout<<"Task id: "<<this->dettagli.id<<", name: "<<this->dettagli.nome<<", descrizione: "<<this->dettagli.descrizione<<std::endl; 
};

void Task::esegui(){
    std::cout<<"Il task viene eseguito"<<std::endl;
}


