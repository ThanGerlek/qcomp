#ifndef GATE_H_QCOMP_12_2_2022_21_55
#define GATE_H_QCOMP_12_2_2022_21_55

#include "../State.h"

class Gate
{
public:
    virtual void applyGate(State *state, int *targets) const = 0;
    virtual int getSize() const = 0;
};

#endif
