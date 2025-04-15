
#include "TaskGiardino.h"


void TaskGiardino::esegui(){
    std::cout<<"Il task "<<this->dettagli.id<<" viene eseguito in giardino."<<std::endl;
}

void TaskGiardino::mostra_dettagli(){
    std::cout<<"Task id: "<<this->dettagli.id
             <<", name: "<<this->dettagli.nome
             <<", descrizione: "<< this->dettagli.descrizione
             <<", superficie giardino "<<this->metri_quadri<<" m2"
             <<std::endl; 
};
