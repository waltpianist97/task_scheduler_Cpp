#ifndef PARAMETRI_TASK_H
#define PARAMETRI_TASK_H

struct ParametriTask {
    virtual ~ParametriTask() = default;
};

struct ParametriCasa : public ParametriTask {
    int num_stanze;
};

struct ParametriGiardino : public ParametriTask {
    int metri_quadri = 20;
};
#endif
