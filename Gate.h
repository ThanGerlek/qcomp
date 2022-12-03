#ifndef GATE_H_QCOMP_12_2_2022_21_55
#define GATE_H_QCOMP_12_2_2022_21_55

#include "State.h"

class Gate
{
public:
    void apply(State *state);
    Gate();
    ~Gate();

private:
    //
};

#endif
