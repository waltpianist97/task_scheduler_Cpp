#ifndef TASK_FACTORY_H
#define TASK_FACTORY
#include <vector>
#include "Task.h"
#include "Dettagli.h"
#include "ParametriTask.h"

enum class TipoTask { Casa, Giardino };

class TaskFactory{

    public:
        std::vector<Task*>tasks ={};

        TaskFactory(){};
        void creaTask(const Dettagli& dettagli,TipoTask tipo, ParametriTask* parametri);

        void rimuoviTask(std::string id);


};


#endif