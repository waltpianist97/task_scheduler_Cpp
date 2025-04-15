#ifndef TASK_H
#define TASK_H
#include <iostream>
#include "Dettagli.h"

class Task{
    
    public:
      
        Dettagli dettagli;
        Task(const Dettagli& d):dettagli(d){};
        virtual void esegui() = 0;
        virtual void mostra_dettagli() = 0;

        virtual ~Task() = default;

};

#endif