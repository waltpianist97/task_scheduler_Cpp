#include "TaskFactory.h"
#include "TaskCasa.h"
#include "TaskGiardino.h"
#include "ParametriTask.h"

void TaskFactory::creaTask(const Dettagli& dettagli, TipoTask tipo, ParametriTask* parametri) {
    
    switch (tipo) {
        case TipoTask::Casa: {
            auto* p = dynamic_cast<ParametriCasa*>(parametri);
            TaskCasa* task = new TaskCasa(dettagli, p->num_stanze);
            this->tasks.push_back(task);
            break;
        }

        case TipoTask::Giardino: {
            auto* p = dynamic_cast<ParametriGiardino*>(parametri);
            TaskGiardino* task = new TaskGiardino(dettagli, p->metri_quadri);
            this->tasks.push_back(task);
            break; 
        }
    }
        
}


void TaskFactory::rimuoviTask(std::string id){

    for (int i=0;i< this->tasks.size();i++){
        if(tasks[i]->dettagli.id == id){
            this->tasks.erase( this->tasks.begin()+i);
        }
    }
}