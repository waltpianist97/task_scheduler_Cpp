#ifndef TASK_GIARDINO_H
#define TASK_GIARDINO_H
#include "task.h"
#include <iostream>
#include "Dettagli.h"

class TaskGiardino:public Task{
    
    public:
        std::string giardino;
        int metri_quadri;
        TaskGiardino(const Dettagli& d,  int m2) 
            : Task(d), metri_quadri(m2) {}        
        void esegui() override; 
        void mostra_dettagli() override;
        ~TaskGiardino() override {};
       
};

#endif