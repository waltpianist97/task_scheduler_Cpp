#include <iostream>
#include <vector>
#include "classes/Task.h"
#include "classes/TaskCasa.h"
#include "classes/TaskGiardino.h"
#include "classes/TaskFactory.h"
#include "classes/Dettagli.h"
#include "ParametriTask.h"

int main(){
   
    TaskFactory tf ;

    // CREA 2 TASK
    std::cout<<"CREAZIONE PRIMI 2 TASKS..."<<std::endl;

    Dettagli dc;
    dc.id ="0xff123";
    dc.nome = "spazzatura";
    dc.descrizione = "buttare la spazzatura";
    ParametriCasa* pc = new ParametriCasa;
    pc->num_stanze = 20;
    
    tf.creaTask(dc,TipoTask::Casa,pc);

    Dettagli dg;
    dg.id ="0xff125";
    dg.nome = "allarme";
    dg.descrizione = "spegni l'allarme";
    ParametriGiardino* pg = new ParametriGiardino;
    pg->metri_quadri=50;

    tf.creaTask(dg,TipoTask::Giardino,pg);

    dg.id ="0xff129";
    dg.nome = "piscina";
    dg.descrizione = "riempi la piscina";
    ParametriGiardino* pg1 = new ParametriGiardino;

    tf.creaTask(dg,TipoTask::Giardino,pg1);

    for (auto &t:tf.tasks){
        
        t->mostra_dettagli();
        t->esegui();
    }

    // RIMUOVI UN TASK ...
    tf.rimuoviTask("0xff125");
    std::cout<<std::endl;
    std::cout<<"RIMOZIONE TASK..."<<std::endl;
    for (auto &t:tf.tasks){
        
        t->mostra_dettagli();
        t->esegui();
    }

}
