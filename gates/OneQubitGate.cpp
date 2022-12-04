#ifndef H_GATE_CPP_QCOMP_12_3_2022_17_55
#define H_GATE_CPP_QCOMP_12_3_2022_17_55

#include "OneQubitGate.h"

OneQubitGate::OneQubitGate() {}

OneQubitGate::~OneQubitGate() {}

void OneQubitGate::applyGate(State *state, int *targets) const
{
    applyGate(state, targets[0]);
}

void OneQubitGate::applyGate(State *state, int target) const
{
    // TODO
}

int OneQubitGate::getSize() const
{
    return 2;
}

#endif
