#ifndef QCOMP_H_12_2_2022_21_59
#define QCOMP_H_12_2_2022_21_59

#include "gates/Gate.h"
#include "State.h"

class QComp
{
public:
    QComp();
    ~QComp();
    void clear();
    void apply(Gate *gate, int *targets);
    bool measure(int q);
    void printState();

private:
    State *state;
};

#endif
