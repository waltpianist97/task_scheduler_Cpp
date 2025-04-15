#ifndef TASK_CASA_H
#define TASK_CASA_H
#include "task.h"
#include <iostream>

class TaskCasa:public Task{
    
    public:
        int num_stanze;
        
        TaskCasa(const Dettagli& d, int n) 
            : Task(d), num_stanze(n) {}        
        void esegui() override; 
        void mostra_dettagli() override;
        ~TaskCasa() override {};
       
};

#endif