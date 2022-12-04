#ifndef QCOMP_H_12_2_2022_21_59
#define QCOMP_H_12_2_2022_21_59

#include "Gate.h"
#include "State.h"

class QComp
{
public:
    QComp();
    ~QComp();
    void clear();
    void apply(Gate *gate);
    bool measure(int q);
    void printState();

private:
    State *state;
};

#endif
